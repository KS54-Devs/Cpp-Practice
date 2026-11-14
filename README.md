<!-- Шапка (волна) --> <img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&height=200&section=header&text=Cpp-Practice&fontSize=60&fontAlignY=38&desc=Мои%20практики%20по%20C%2B%2B&descAlignY=60&animation=fadeIn" width="100%" /> <!-- Печатающийся текст --> <p align="center"> <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&size=20&pause=1200&color=36BCF7&center=true&vCenter=true&width=520&height=40&lines=%D0%9F%D1%80%D0%B8%D0%B2%D0%B5%D1%82%21%20%D0%AF%20%D0%BF%D0%B5%D1%80%D0%B2%D0%BE%D0%BA%D1%83%D1%80%D1%81%D0%BD%D0%B8%D0%BA;%D0%A3%D1%87%D1%83%D1%81%D1%8C%20%D0%BF%D0%B8%D1%81%D0%B0%D1%82%D1%8C%20%D0%BD%D0%B0%20C%2B%2B;%D0%A3%D0%BA%D0%B0%D0%B7%D0%B0%D1%82%D0%B5%D0%BB%D0%B8%2C%20%D0%BC%D0%B0%D1%81%D1%81%D0%B8%D0%B2%D1%8B%2C%20%D1%81%D0%BE%D1%80%D1%82%D0%B8%D1%80%D0%BE%D0%B2%D0%BA%D0%B0" alt="Привет! Я первокурсник. Учусь писать на C++"> </p> <p align="center"> <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f44b/512.gif" width="26" height="26" alt=""> <b>Привет! Я учусь программировать.</b><br> Здесь мои практические работы на C++ </p> <!-- Значки технологий --> <p align="center"> <img src="https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=cplusplus&logoColor=white" /> <img src="https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white" /> <img src="https://img.shields.io/badge/GitHub-181717?style=for-the-badge&logo=github&logoColor=white" /> <img src="https://img.shields.io/badge/VS_Code-007ACC?style=for-the-badge&logo=visualstudiocode&logoColor=white" /> </p>
<h2><img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f4da/512.gif" width="28" height="28" alt=""> Чему я учусь</h2>
✅ Ввод и вывод данных
✅ Условия (if) и циклы (while, for)
✅ Функции
✅ Ссылки (&)
✅ Массивы и символьные массивы
✅ Указатели
✅ Динамическая память (new / delete)
✅ Сортировка (пузырьком)
✅ Разбиение программы на несколько файлов (.h и .cpp)
<h2><img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f4c2/512.gif" width="28" height="28" alt=""> Структура репозитория</h2>
Папки

Каждая папка это отдельная программа из нескольких файлов.

Папка	Какой материал отрабатывался
AppPointFunc/
<sub>AppPoint.h · AppPointFunc.cpp · CalcArea.cpp</sub>	Указатели и функции: передача указателей в функцию, площадь круга
ConvertMilFut/
<sub>ConvertMilFut.h · ConvertMilFut.cpp</sub>	Функции: перевод миль и футов в километры и метры
DinamicMemory/
<sub>DinamicMemory.h · DinamicMemory.cpp</sub>	Динамическая память: new и delete для числа и для массива
Massiv/
<sub>Massiv.h · Massiv.cpp · Func.cpp</sub>	Массивы: заполнение и вывод, функция в отдельном файле
MilFutKM/
<sub>MilFutKM_MilFutKM.h · MilFutKM_MilFutKM.cpp</sub>	Заголовочные файлы: перевод миль и футов в километры, константы в .h
PointMass/
<sub>PointMass.h · PointMass.cpp · Swap.cpp · printMass.cpp · randMass.cpp</sub>	Указатели и массивы: динамический массив, вывод через setw, функции swap, вывод и заполнение
PointerFunc/
<sub>PointFunc.h · PointerFunc.cpp · CalcArea.cpp</sub>	Указатели в функциях: результат возвращается через указатель
Sort_1/
<sub>Sort_1.h · Sort_1.cpp · Swap.cpp</sub>	Сортировка: пузырьком, обмен значений в отдельной функции
Отдельные файлы

Каждый файл это одна небольшая программа.

Файл	Какой материал отрабатывался
AppCilka.cpp	Ссылки: int& на переменную
AppIf.cpp	Условие if и цикл while: сумма квадратов
AppPoint.cpp	Указатели: указатели на char и int, вывод адресов
AppPoint2.cpp	Указатели: разность указателей, заполнение массива символов
AppPoint3.cpp	Ссылки: ссылка на ссылку и их адреса
AppPointMassiv1.cpp	Указатели и массивы: доступ к элементам через указатель
AppPoitMassiv.cpp	Указатели и массивы: адрес массива и значение указателя на него
CharMassiv.cpp	Массивы символов: строка в char[], обход по указателю
Kvadrat1.cpp	Циклы: сумма квадратов от 1 до введённого числа
PointPointMass.cpp	Динамическая память: int**, двумерный «рваный» массив
PointerMass.cpp	Указатели и массивы: адрес массива и адрес самого указателя
<h2><img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f680/512.gif" width="28" height="28" alt=""> Как запустить</h2>
bash
git clone https://github.com/KS54-Devs/Cpp-Practice.git && cd Cpp-Practice
Что собираем	Команда
Файл из корня	g++ AppIf.cpp -o AppIf
Папка	cd Sort_1 && g++ *.cpp -o Sort_1

[!NOTE] Программы писались под Windows: в них есть chcp 65001 (чтобы русский текст не превращался в кракозябры) и pause. На Linux всё соберётся и запустится, но эти две команды выведут служебное сообщение.

<h2><img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f527/512.gif" width="28" height="28" alt=""> Требования</h2>
Компилятор g++ (на Windows это MinGW)
Visual Studio Code с расширением C/C++
Git
<h2><img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f4ca/512.gif" width="28" height="28" alt=""> О репозитории</h2> <p align="center"> <img src="https://img.shields.io/github/last-commit/KS54-Devs/Cpp-Practice?style=for-the-badge&color=36BCF7" /> <img src="https://img.shields.io/github/commit-activity/t/KS54-Devs/Cpp-Practice?style=for-the-badge&color=blueviolet" /> <img src="https://img.shields.io/github/languages/top/KS54-Devs/Cpp-Practice?style=for-the-badge&color=00599C" /> <img src="https://img.shields.io/github/repo-size/KS54-Devs/Cpp-Practice?style=for-the-badge&color=success" /> </p>
<h2 align="center"><img src="https://fonts.gstatic.com/s/e/notoemoji/latest/1f4bb/512.gif" width="28" height="28" alt=""> Автор проекта</h2> <h3 align="center"> <a href="https://github.com/InConTakT">InConTakT</a> </h3> <p align="center"> <img src="https://fonts.gstatic.com/s/e/notoemoji/latest/2b50/512.gif" width="22" height="22" alt=""> Если репозиторий понравился, поставь звезду! </p> <img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&height=100&section=footer" width="100%" />
