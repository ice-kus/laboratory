#include "text_file.h"
#include <ctime> 

using namespace std;

vector <question> input_list_question(QString filename)
{
	decryption(filename);
	QFile file(filename);
	vector <question> list_temp;
	QString str = "";
	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		str = file.readLine();
		while (str.left(8) != "<result>")
		{
			question temp;
			temp.true_answer = "";
			temp.st = false;
			str = file.readLine();
			if (str.left(8) != "<result>")
			{
				int check = str.indexOf("<st>"); //тег принадлежности к ТБ
				if (check > 0)
				{
					temp.st = true;
					str.remove("<st>");
				}
				temp.quest = str;
				str = file.readLine();
				while (str != "\n")
				{
					check = str.indexOf("<true>"); //тег, который обозначает верный ответ
					if (check >= 0)
					{
						str.remove("<true>");
						temp.true_answer += str; //добавление к правильному ответу в структуру
					}
					temp.list_answer.push_back(str); //удобавление ответа в структуру
					str = file.readLine();
				}
				unsigned int seed = time(0);
				srand(seed);
				random_shuffle(temp.list_answer.begin(), temp.list_answer.end());
				list_temp.push_back(temp);
			}
		}
	}
	unsigned int seed = time(0);
	srand(seed);
	random_shuffle(list_temp.begin(), list_temp.end());
	file.close();
	encryption(filename);
	return list_temp;
}

vector <QString> input_list_file()
{
	vector <QString> temp;
	QDir dir;  //объявляем объект работы с папками
	dir.setFilter(QDir::Files | QDir::Hidden | QDir::NoSymLinks);   ///устанавливаем фильтр выводимых файлов/папок (см ниже)
	QFileInfoList list = dir.entryInfoList();
	for (int i = 0; i < list.size(); ++i)
	{
		QFileInfo fileInfo = list.at(i);
		QString str = QString::fromLocal8Bit(qPrintable(QString("%1").arg(fileInfo.fileName())));
		if (str.indexOf(".html") > 0)
		{
			QFile file(str);
			QString t1, t2 = QString::fromLocal8Bit("#laboratory#");
			if (file.open(QIODevice::ReadOnly | QIODevice::Text))
				t1 = file.readLine();
			t1 = t1.left(12);
			for (int j = 0; j <= t2.size(); j++)
				t2[j].unicode() += 3 * j;
			t2 = t2.toUtf8();
			if (t1 == t2)
				temp.push_back(str);
			file.close();
		}
	}
	return temp;
}

result input_result(QString filename)
{
	result temp;
	decryption(filename);
	QFile file(filename);
	QString str = "";
	if (file.open(QIODevice::ReadOnly | QIODevice::Text))
	{
		do
			str = file.readLine();
		while (str.left(8) != "<result>");
		while (!file.atEnd())
		{
			str = file.readLine();
			if (str.left(5) == "<M21>")
			{
				str.remove("<M21>");
				std::istringstream input(str.toStdString());
				std::vector<QString> list;
				while (!input.eof())
				{
					std::string substring;
					input >> substring;
					list.push_back(QString::fromStdString(substring));
				}
				for (int i = 0; i < list.size(); i++)
					temp.M21.push_back(list[i].toFloat());
			}
			else if (str.left(5) == "<M12>")
			{
				str.remove("<M12>");
				std::istringstream input(str.toStdString());
				std::vector<QString> list;
				while (!input.eof())
				{
					std::string substring;
					input >> substring;
					list.push_back(QString::fromStdString(substring));
				}
				for (int i = 0; i < list.size(); i++)
					temp.M12.push_back(list[i].toFloat());
			}
			else
				temp.text += str;
		}
	}
	file.close();
	encryption(filename);
	return temp;
}

void encryption(QString filename)
{
	QFile file(filename);
	if ((file.exists()) && (file.open(QIODevice::ReadOnly)))
	{
		QString str = "";
		while (!file.atEnd())
			str = str + file.readLine();
		for (int i = 0; i <= str.size(); i++)
			str[i].unicode() += 3 * i;
		file.close();
		file.open(QIODevice::WriteOnly);
		file.write(str.toUtf8());
		file.close();
	}
}

void decryption(QString filename)
{
	QFile file(filename);
	if ((file.exists()) && (file.open(QIODevice::ReadOnly)))
	{
		QString str = "";
		while (!file.atEnd())
			str = str + file.readLine();
		for (int i = 0; i <= str.size(); i++)
			str[i].unicode() -= 3 * i;
		file.close();
		file.open(QIODevice::WriteOnly);
		file.write(str.toUtf8());
		file.close();
	}
}