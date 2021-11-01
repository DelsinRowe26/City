#include <iostream>
#include <algorithm>
#include <cctype>
#include <string>
#include <Windows.h>
#include <fstream>
using namespace std;
int main() {
	srand(time(NULL));
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	string city, city_per, city_per1, posl_buk, posl_buk_per, povt;
	ofstream cities, povtorki;
	city = "";
	{
		povtorki.open("povtorki.txt");
		povtorki << city;
		povtorki.close();
		cities.open("cities_a.txt");
		cities << "Абаза Абакан Абвиль Абдулино Абиджан Абинск Абу-Даби Абуджа Авиньон Агидель Агадир Агрыз Адана Аддис-Абеба Аделаида Адыгейск Азнакаево Азов Ак-Довурак Акка Аккра Аксай Актау Актобе Алагир Алапаевск Алатырь Алдан Алейск Александрия Алжир Александров Александровск Александровск-Сахалинский Алексеевка Алексин Алжир Алзамай Алматы Альметьевск Амман Амстердам Амурск Амьен Анадырь Анапа Ангарск Андреаполь Анжеро-Судженск Анива Анкара Анталья Антананариву Антверпен Аньшань Апатиты Апиа Апрелевка Апшеронск Арамиль Аргун Ардатов Ардон Арзамас Аркадак Арль Армавир Арнем Арсеньев Артём Артёмовск Артёмовский Архангельск Асбест Асино Астана Астрахань Асунсьон Аткарск Атырау Афины Ахмадабад Ахтубинск Ачинск Аша Ашдод Ашкелон Ашхабад";
		cities.close();
		cities.open("cities_b.txt");
		cities << "Бабаево Бабушкин Бавлы Багдад Багратионовск Базель Байкальск Баймак Бакал Баксан Баку Балабаново Балаково Балахна Балашиха Балашов Балей Балтийск Балыкчи Бангалор Бангкок Бандунг Барабинск Барнаул Барранкилья Барселона Барыш Батайск Баткен Батуми Бежецк Бейрут Белая-Калитва Белая-Холуница Белгород Белград Белебей Белёв Белинский Белово Белогорск Белозерск Белокуриха Беломорск Белорецк Белореченск Белоусово Белоярский Белу-Оризонти Бельфор Белый Берген Бердск Березники Берёзовский Берн Берлин Беслан Бийск Бикин Билибино Биньямина Бирмингем Биробиджан Бирск Бирюсинск Бирюч Бишкек Благовещенск Благодарный Блед Бобров Бобруйск Богданович Богородицк Богородск Богота Боготол Богучар Бодайбо Бокситогорск Болгар Бологое Болотное Болохово Болхов Большой-Камень Бор Бордо Борзя Борисов Борисоглебск Боровичи Боровск Бородино Бохум Бразилиа Братислава Братск Бреда Бремен Брест Брисбен Бристоль Брно Бронницы Брюгге Брюссель Брянск Бугульма Бугуруслан Будапешт Будённовск Бузулук Буинск Буй Буйнакск Бургас Бутурлиновка Бухара Бухарест Буэнос-Айрес Бхопал";
		cities.close();
		cities.open("cities_v.txt");
		cities << "Вадодара Валдай Валенсия Валуйки Варна Варшава Вашингтон Веймар Велиж Великие-Луки Великий-Новгород Великий-Устюг Веллингтон Вельск Вена Венеция Венёв Вентспислс Верещагино Верея Вернигнроде Верхнеуральск Верхний-Тагил Верхний-Уфалей Верхняя-Пышма Верхняя-Салда Верхняя-Тура Верхотурье Верхоянск Весьегонск Ветлуга Видное Вильнюс Вилюйск Вилючинск Витебск Вихоревка Вичуга Владивосток Владикавказ Владимир Волгоград Волгодонск Волгореченск Волжск Волжский Вологда Володарск Волоколамск Волосово Волхов Волчанск Вольск Воркута Воронеж Ворсма Воскресенск Воткинск Вроцлав Всеволожск Вуктыл Выборг Выкса Высоковск Высоцк Вытегра Вышний Волочёк Вяземский Вязники Вязьма Вятские-Поляны";
		cities.close();
		cities.open("cities_g.txt");
		cities << "Гаага Гавана Гаврилов-Посад Гаврилов-Ям Гагарин Гагра Гай Галич Галле Гамбург Ганновер Гаосюн Гатчина Гауда Гвадалахара Гвардейск Гватемала Гданьск Гдов Геленджик Гент Георгиевск Гётеборг Гирин Глазго Глазов Голицыно Гонконг Гомель Горбатов Горно-Алтайск Горнозаводск Горняк Городец Городище Городовиковск Гороховец Горячий-Ключ Грайворон Грас Грац Гремячинск Гродно Грозный Гронинген Грязи Грязовец Гуанчжоу Гуаякиль Губаха Губкин Губкинский Гудермес ГуйянГуково Гулькевичи Гурьевск Гусев Гусиноозёрск Гусь-Хрустальный Гюмри";
		cities.close();
		cities.open("cities_d.txt");
		cities << "Давлеканово Дагестанские-Огни Дакар Дакка Даллас Далматово Дальнегорск Дальнереченск Далянь Дамаск Данилов Данков Дар-эс-Салам Даугавпилс Дегтярск Дедовск Делфт Дели Демидов Дербент Десногорск Джайпур Джакарта Дзержинск Дзержинский Дивногорск Дигора Димитровград Дмитриев-Льговский Дмитров Дмитровск Днепр Дно Добрянка Долгопрудный Долинск Домодедово Донецк Донской Дорогобуж Дрезден Дрезна Дуала Дубай Дублин Дубна Дубовка Дубровник Дудинка Духовщина Душанбе Дюнкерк Дюртюли Дюссельдорф Дятьково";
		cities.close();
		cities.open("cities_e.txt");
		cities << "Евпатория Егорьевск Ейск Екатеринбург Елабуга Елец Елизово Ельня Еманжелинск Емва Енисейск Ереван Ершов Ессентуки Ефремов";
		cities.close();
		cities.open("cities_zh.txt");
		cities << "Железногорск Железногорск-Илимский Железнодорожный Женева Жердевка Жигулёвск Жиздра Жирновск Житомир Жуков Жуковка Жуковский";
		cities.close();
		cities.open("cities_z.txt");
		cities << "Завитинск Заводоуковск Заволжск Заволжье Загреб Задонск Заинск Закаменск Заозёрный Заозёрск Западная-Двина Заполярный Запорожье Зарайск Заречный Заречный Заринск Звенигово Звенигород Зверево Зволле Зеленогорск Зеленогорск Зеленоград Зеленоградск Зеленодольск Зеленокумск Зерноград Зея Зима Зихрон-Яаков Златоуст Злынка Змеиногорск Знаменск Зубцов Зуевка";
		cities.close();
		cities.open("cities_i.txt");
		cities << "Ибадан Ивангород Иваново Ивано-Франковск Ивантеевка Ивдель Игарка Иерусалим Ижевск Избербаш Измир Изобильный Иланский Индаур Инза Инсар Инсбрук Инта Инчхон Иоккаити Иокогама Ипатово Ирбит Иркутск Исилькуль Искитим Искогама Исламабад Ист-Дерри Истра Исфахан Ишим Ишимбай";
		cities.close();
		cities.open("cities_iy.txt");
		cities << "Йена Йокнеам Йорк Йоханнесбург Йошкар-Ола Йоэнсуу";
		cities.close();
		cities.open("cities_k.txt");
		cities << "Кавасаки Кадис Кадников Казань Каир Кайеркан Калач Калач-на-Дону Калачинск Кале Кали Калининград Калининск Калтан Калуга Калькутта Кальян Калязин Камакура Камбарка Каменка Каменногорск Каменск-Уральский Каменск-Шахтинский Камень-на-Оби Камешково Камызяк Камышин Камышлов Канаш Кандалакша Канны-(Канн) Канпур Канск Кант Карабаново Карабаш Карабулак Караганда Каракас Каракол Карасук Карачаевск Карачев Карачи Каргат Каргополь Каркассон Карловы Вары Карлсруэ Кармиэль Карпинск Картахена Карталы Касабланка Касимов Касли Каспийск Катав-Ивановск Катайск Катакюсю Каунас Кацуяма Качканар Кашин Кашира Кванджу Кедровый Кемерово Кемь Кесон-Сити Кёльн Кзыл-Орда Киев Кизел Кизилюрт Кизляр Киль Кимовск Кимры Кингисепп Кинель Кинешма Киншаса Киреевск Киркенес Киото Киренск Киржач Кириллов Кириши Киров Кировград Кировоград Кирово-Чепецк Кировск Кировск Кирс Кирсанов Кирьят-Шмона Киселёвск Кисловодск Кито Кишинев Клайпеда Кливленд Климовск Клин Клинцы Княгинино Кобе Ковдор Ковентри Ковров Ковылкино Когалым Кодинск Козельск Козловка Козьмодемьянск Коканд Кола Кологрив Коломна Колпашево Колпино Кольчугино Коммунар Компьень Комсомольск Комсомольск-на-Амуре Конаково Конакри Кондопога Кондрово Константиновск Копейск Копенгаген Кораблино Кордова Кореновск Коркино Королёв Короча Корсаков Коряжма Костерёво Костомукша Кострома Котельники Котельниково Котельнич Котлас Котово Котовск Кохма Краков Красавино Красноармейск Красноармейск Красновишерск Красногорск Краснодар Красное-Село Краснозаводск Краснознаменск Краснознаменск Краснокаменск Краснокамск Краснослободск Краснослободск Краснотурьинск Красноуральск Красноуфимск Красноярск Красный Кут Красный-Сулин Красный-Холм Кремёнки Кронштадт Кропоткин Крымск Кстово Куала-Лумпур Кубинка Кувандык Кувшиново Кудымкар Кузнецк Кулебаки Кумертау Кунгур Куньмин Купино Курган Курганинск Курильск Курлово Куровское Курск Куртамыш Курчатов Куса Кустанай Кушва Кызыл Кыштым Кяхта";
		cities.close();
		cities.open("cities_l.txt");
		cities << "Ла-Пас Лабинск Лабытнанги Лагань Лагос Лаишево Лакинск Лакхнау Лангепас Ланьчжоу Лаc-Вегас Лахденпохья Лахор Лебедянь Лейден Лейпциг Лелистад Ле-Ман Лениногорск Ленинск Ленинск-Кузнецкий Ленск Лермонтов Лесной Лесозаводск Лесосибирск Ливерпуль Ливны Лидс Ликино-Дулёво Лилль Лима Лимассол Лимож Линкопинг Линц Лион Липецк Липки Лиски Лиссабон Лихославль Лобня Лодейное-Поле Лозанна Ломоносов Лондон Лос-Анджелес Лосино-Петровский Луанда Лувен Луга Луганск Лудхияна Луза Лукоянов Луховицы Луцк Лысково Лысьва Лыткарино Львов Любань Люберцы Любим Люксембург Люцерн Лянтор";
		cities.close();
		cities.open("cities_m.txt");
		cities << "Мааслуис Маастрихт Магадан Магас Магдебург Магнитогорск Мадрас Мадрид Майкоп Майский Майами-Бич Макарьев Макушино Малага Малая-Вишера Малгобек Малмыж Малоархангельск Малоярославец Мамадыш Мамоново Манаус Манила Мантурово Манчестер Мапуту Маракайбо Мариинск Мариинский-Посад Маркс Марракеш Марсель Маршалл Махачкала Мглин Мегион Медан Медвежьегорск Медельин Медногорск Медынь Межгорье Междуреченск Мезень Меленки Мелеуз Мельбурн Менделеевск Мензелинск Мехико Мешхед Мещовск Миасс Мидделбург Микунь Милан Миллерово Минеральные-Воды Минск Минусинск Миньяр Мирный Мирный Михайлов Михайловка Михайловск Михайловск Мичуринск Могилёв Могоча Можайск Можга Моздок Монреаль Монтевидео Монтеррей Монтре Мончегорск Морозовск Моршанск Мосальск Москва Московский Мосс Мостар Мумбаи Муравленко Мураши Мурманск Муром Мценск Мыски Мытищи Мышкин Мюнхен";
		cities.close();
		cities.open("cities_n.txt");
		cities << "Набережные-Челны Навашино Наволоки Нагоя Нагпур Надым Назарет Назарово Назрань Называевск Найменген Найроби Нальчик Нанкин Наньчан Нарва Нариманов Наро-Фоминск Нарткала Нарьян-Мар Нарын Нахичевань Находка Неаполь Невель Невельск Невинномысск Невьянск Нелидово Неман Нерехта Нерчинск Нерюнгри Несаулькойотль Несвиж Нестеров Нефтегорск Нефтекамск Нефтекумск Нефтеюганск Нея Нижневартовск Нижнекамск Нижнеудинск Нижние-Серги Нижний-Ломов Нижний-Новгород Нижний-Тагил Нижняя-Салда Нижняя-Тура Николаев Николаевск Николаевск-на-Амуре Никольск Никольское Никосия Ницца Новая-Ладога Новая-Ляля Новоалександровск Новоалтайск Новоаннинский Нововоронеж Новодвинск Новозыбков Новокубанск Новокузнецк Новокуйбышевск Новомичуринск Новомосковск Новопавловск Новоржев Новороссийск Новосибирск Новосиль Новосокольники Новотроицк Новоузенск Новоульяновск Новоуральск Новохопёрск Новочебоксарск Новочеркасск Новошахтинск Новый-Оскол Новый-Уренгой Ногинск Нолинск Норильск Ноябрьск Нукуалофа Нурлат Нью-Дели Нью-Йорк Нытва Нюрба Нягань Нязепетровск Няндома";
		cities.close();
		cities.open("cities_o.txt");
		cities << "Облучье Обнинск Обоянь Обь Одесса Одинцово Ожерелье Озёрск Озёрск Озёры Окленд Октябрьск Октябрьский Окуловка Олёкминск Оленегорск Оломоуц Олонец Ольштын Омдурман Омск Омута Омутнинск Онега Опочка Орёл Оренбург Орехово-Зуево Орлов Орск Орхус Оса Осака Осинники Осло Осташков Остров Островной Острогожск Отрадное Отрадный Оттава Оха Оханск Очёр Ош";
		cities.close();
		cities.open("cities_p.txt");
		cities << "Павлово Павловск-(Лен.обл.) Павловск Павловский-Посад Павлодар Палембанг Палермо Палласовка Пангаи Паневежис Париж Партизанск Певек Пенза Первомайск Первоуральск Перевоз Пересвет Переславль-Залесский Пекин Пермь Перт Пестово Петах-Тиква Петергоф/Петродворец Петров-Вал Петровск Петровск-Забайкальский Петрозаводск Петропавловск-Камчатский Петухово Петушки Печора Печоры Пикалёво Пионерский Питкяранта Плёс Плавск Пласт Поворино Подольск Подпорожье Познань Покачи Покров Покровск Полевской Полесск Полоцк Полтава Полысаево Полярные-Зори Полярный Поронайск Портленд Порту-Алегри Порхов Потсдам Похвистнево Почеп Починок Пошехонье Правдинск Прага Приволжск Приморск Приморск Приморско-Ахтарск Приозерск Провиденс Прокопьевск Пролетарск Протвино Прохладный Псков Пугачёв Пудож Пуна Пусан Пустошка Пучеж Пушкин Пушкино Пущино Пуэбла Пхеньян Пыталово Пыть-Ях Пятигорск";
		cities.close();
		cities.open("cities_r.txt");
		cities << "Рабат Радужный Радужный Райчихинск Раменское Рассказово Ревда Реж Резекне Реймс Ресифи Реутов Ржев Рига Рим Рио-де-Жанейро Ричмонд Ришон-ле-Цион Ровно Родники Рославль Россошь Ростов Ростов-на-Дону Росток Роттердам Рошаль Ртищево Рубцовск Рудня Руза Рузаевка Рыбинск Рыбное Рыльск Ряжск Рязань";
		cities.close();
		cities.open("cities_s.txt");
		cities << "Салават Салаир Салвадор Салехард Салинас Сало Сальск Самара Самарканд Сан-Антонио Сан-Диего Санкт-Петербург Сан-Паулу Санто-Доминго Сантьяго Сан-Франциско Сан-Хосе Сан-Хусто Саппоро Саранск Сарапул Саратов Саров Сасово Сатка Сафоново Саяногорск Саянск Светлогорск Светлоград Светлый Светогорск Свирск Свободный Себеж Севастополь Северо-Курильск Северобайкальск Северодвинск Североморск Североуральск Северск Севск Сегежа Сельцо Семаранг Семёнов Семикаракорск Семилуки Семипалатинск Сенгилей Сент-пол Серафимович Сергач Сергиев Посад Сердобск Серов Серпухов Сертолово Сестрорецк Сеул Сиань Сибай Сидней Силламяэ Сим Симферополь Сингапур Сковородино Скопин Славгород Славск Славянск-на-Кубани Сланцы Слободской Слюдянка Смоленск Снежинск Снежногорск Собинка Советск Советская Гавань Советский Сокол Сокольники Солигалич Соликамск Солнечногорск Соль-Илецк Сольвычегодск Солт-Лейк-Сити Сольцы Сорочинск Сорск Сортавала Сосенский Сосновка Сосновоборск Сосновый-Бор Сосногорск София Сочи Спас-Деменск Спас-Клепики Спасск Спасск-Дальний Спасск-Рязанский Сплит Спрингфилд Среднеколымск Среднеуральск Сретенск Ставрополь Стамбул Старая-Купавна Старая-Русса Старица Стародуб Старый Оскол Степанакерт Стерлитамак Стокгольм Страсбург Стрежевой Строитель Струнино Ступино Суворов Суджа Судогда Суздаль Сумы Суоярви Сурабая Сураж Сурат Сургут Суровикино Сурск Сусуман Сухиничи Сухой Лог Сухум-(Сухуми) Сходня Сызрань Сыктывкар Сысерть Сычёвка Сянган Сясьстрой";
		cities.close();
		cities.open("cities_t.txt");
		cities << "Тавда Таганрог Тайбэй Тайга Тайшет Тайюань Талас Талдом Талица Таллин-(Таллинн) Талнах Тамбов Тампере Таншань Тара Тарко-Сале Тарту Таруса Татарск Ташкент Таштагол Тбилиси Тверия Тверь Теберда Тебриз Тегеран Тейково Тель-Авив Темников Темрюк Терек Тернополь Тетюши Тилбург Тимашёвск Тирасполь Тихвин Тихорецк Тобольск Тогучин Токио Токмак Тольятти Томари Томмот Томск Топки Торжок Торонто Торопец Тосно Тотьма Трёхгорный Троицк Троицк Тромсё Тронхейм Трубчевск Туапсе Туймазы Тула Тулуза Тулун Туран Туринск Тутаев Тында Тырныауз Тэгу Тэджон Тюкалинск Тюмень Тяньцзинь";
		cities.close();
		cities.open("cities_u.txt");
		cities << "Уварово Углегорск Углич Удачный Удомля Ужгород Ужур Узловая Улан-Удэ Ульяновск Унеча Урай Ургенч Урень Уржум Урумчи Урус-Мартан Урюпинск Усинск Усмань Усолье Усолье-Сибирское Уссурийск Усть-Джегута Усть-Илимск Усть-Каменогорск Усть-Катав Усть-Кут Усть-Лабинск Устюжна Утрехт Уфа Ухань Ухта Учалы Учкудук Уяр";
		cities.close();
		cities.open("cities_f.txt");
		cities << "Фатеж Фейсалабад Феодосия Филадельфия Финикс Флоренция Фокино Франкфурт-на-Майне Франкфурт-на-Одере Фролово Фромборк Фрязино Фукуока Фурманов Фушунь";
		cities.close();
		cities.open("cities_h.txt");
		cities << "Хабаровск Хадера Хадыженск Хайдерабад Хайфа Хайфон Халеб Ханой Ханты-Мансийск Ханчжоу Харабали Хараре Харбин Харлем Харовск Харьков Хасавюрт Хелдер Хеврон Хельсинки Херсон Хертогенбос Хвалынск Хилок Химки Хиросима Хмельницкий Холм Холмск Холон Хотьково Хошимин Хьюстон";
		cities.close();
		cities.open("cities_c.txt");
		cities << "Цзинань Цфат Цхинвал Цивильск Цзыбо Цюрих Цимлянск Цимлянск Цзюлун Цицикар Цукуба Циндао";
		cities.close();
		cities.open("cities_ch.txt");
		cities << "Чадан Чайковский Чанша Чаньчунь Чапаевск Чаплыгин Чебаркуль Чебоксары Чегем Чекалин Челябинск Чердынь Черемхово Черепаново Череповец Черкассы Черкесск Чермоз Чернигов Черновцы Черноголовка Черногорск Чернушка Черняховск Чехов Чикаго Чистополь Чита Читтагонг Чкаловск Чолпон-Ата Чудово Чулым Чунцин Чусовой Чухлома Чэнду";
		cities.close();
		cities.open("cities_sh.txt");
		cities << "Шагонар Шадринск Шали Шанхай Шарджа Шарлеруа Шартр Шарыпово Шарья Шатки Шатура Шахтёрск Шахты Шахунья Шацк Шверин Шебекино Шевченко Шелехов Шенкурск Шеффилд Шилка Шимановск Шиханы Шклов Шлиссельбург Штутгарт Шумерля Шумиха Шуя Шымкент Шэньян";
		cities.close();
		cities.open("cities_sha.txt");
		cities << "Щербинка Щецин Щёкино Щёлково Щигры Щучинск Щучье";
		cities.close();
		cities.open("cities_ii.txt");
		cities << "Ыгдыр Ыдиль Ызник Ыйджонбу Ылгаз Ылгын Ылыджа Ында-Сылласе Ынджирлиова Ынеболу Ысджехисар Ыскилип Ыслахийе Ысмил Ычеричумра Ышыклар";
		cities.close();
		cities.open("cities_ie.txt");
		cities << "Эйлат Эйндховен Электрогорск Электросталь Электроугли Элиста Эль-Гиза Эль-Кувейт Энгельс Энсхеде Эр-Рияд Эртиль Эрфурт Эсберг Эспоо Эссен";
		cities.close();
		cities.open("cities_iyu.txt");
		cities << "Юбилейный Югорск Южа Южно-Сахалинск Южно-Сухокумск Южноуральск Юрга Юрмала Юрьев-Польский Юрьевец Юрюзань Юхнов";
		cities.close();
		cities.open("cities_ya.txt");
		cities << "Ядрин Якутск Ялта Ялуторовск Янаул Янгон Яранск Яровое Ярославль Ярцево Ясногорск Ясный Яхрома";
		cities.close();
	}
	int len, len_1, pos, kol_pov = 0;
	while (city != "Я сдаюсь") {
		getline(cin, city);
		city_per = city;
		if (city != "Я сдаюсь") {
			len = city.length();
			posl_buk = city.erase(0, len - 1);
			transform(posl_buk.begin(), posl_buk.end(), posl_buk.begin(), tolower);
			if (kol_pov != 0) {
				for (int i = 0; i < kol_pov; i++) {
					ifstream povtorki;
					povtorki.open("povtorki.txt");
					povtorki >> povt;
					if (city == povt) {
						break;
					}
				}
			}
			if (posl_buk == "а") {
				ifstream cities;
				cities.open("cities_a.txt");
				for (int i = rand()% 88+1 ; i < 89; i++) {
					cities >> city;
				}
				cout << city;
			} else if (posl_buk == "б") {
				ifstream cities;
				cities.open("cities_b.txt");
				for (int i = rand() % 123 + 1; i < 124; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "в") {
				ifstream cities;
				cities.open("cities_v.txt");
				for (int i = rand() % 72 + 1; i < 73; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "г") {
				ifstream cities;
				cities.open("cities_g.txt");
				for (int i = rand() % 60 + 1; i < 61; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "д") {
				ifstream cities;
				cities.open("cities_d.txt");
				for (int i = rand() % 55 + 1; i < 56; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "е") {
				ifstream cities;
				cities.open("cities_e.txt");
				for (int i = rand() % 15 + 1; i < 16; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "ж") {
				ifstream cities;
				cities.open("cities_zh.txt");
				for (int i = rand() % 12 + 1; i < 13; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "з") {
				ifstream cities;
				cities.open("cities_z.txt");
				for (int i = rand() % 37 + 1; i < 38; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "и") {
				ifstream cities;
				cities.open("cities_i.txt");
				for (int i = rand() % 33 + 1; i < 34; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "й") {
				ifstream cities;
				cities.open("cities_iy.txt");
				for (int i = rand() % 6 + 1; i < 7; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "к") {
				ifstream cities;
				cities.open("cities_k.txt");
				for (int i = rand() % 214 + 1; i < 215; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "л") {
				ifstream cities;
				cities.open("cities_l.txt");
				for (int i = rand() % 69 + 1; i < 70; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "м") {
				ifstream cities;
				cities.open("cities_m.txt");
				for (int i = rand() % 95 + 1; i < 96; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "н") {
				ifstream cities;
				cities.open("cities_n.txt");
				for (int i = rand() % 99 + 1; i < 100; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "о") {
				ifstream cities;
				cities.open("cities_o.txt");
				for (int i = rand() % 46 + 1; i < 47; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "п") {
				ifstream cities;
				cities.open("cities_p.txt");
				for (int i = rand() % 90 + 1; i < 91; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "р") {
				ifstream cities;
				cities.open("cities_r.txt");
				for (int i = rand() % 37 + 1; i < 38; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "с") {
				ifstream cities;
				cities.open("cities_s.txt");
				for (int i = rand() % 154 + 1; i < 155; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "т") {
				ifstream cities;
				cities.open("cities_t.txt");
				for (int i = rand() % 74 + 1; i < 75; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "у") {
				ifstream cities;
				cities.open("cities_u.txt");
				for (int i = rand() % 37 + 1; i < 38; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "ф") {
				ifstream cities;
				cities.open("cities_f.txt");
				for (int i = rand() % 16 + 1; i < 17; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "х") {
				ifstream cities;
				cities.open("cities_h.txt");
				for (int i = rand() % 33 + 1; i < 34; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "ц") {
				ifstream cities;
				cities.open("cities_c.txt");
				for (int i = rand() % 12 + 1; i < 13; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "ч") {
				ifstream cities;
				cities.open("cities_ch.txt");
				for (int i = rand() % 37 + 1; i < 38; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "ш") {
				ifstream cities;
				cities.open("cities_sh.txt");
				for (int i = rand() % 32 + 1; i < 33; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "щ") {
				ifstream cities;
				cities.open("cities_sha.txt");
				for (int i = rand() % 7 + 1; i < 8; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "ы") {
				ifstream cities;
				cities.open("cities_ii.txt");
				for (int i = rand() % 16 + 1; i < 17; i++) {
					cities >> city;
				}
				cout << city;
			}	
			else if (posl_buk == "ь") {
				pos = city_per.find("ь");
				city_per1 = city_per.erase(pos, 1);
				len_1 = city_per1.length();
				posl_buk_per = city_per.erase(0, len_1 - 1);
				if (posl_buk_per == "а") {
					ifstream cities;
					cities.open("cities_a.txt");
					for (int i = rand() % 88 + 1; i < 89; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "б") {
					ifstream cities;
					cities.open("cities_b.txt");
					for (int i = rand() % 123 + 1; i < 124; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "в") {
					ifstream cities;
					cities.open("cities_v.txt");
					for (int i = rand() % 72 + 1; i < 73; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "г") {
					ifstream cities;
					cities.open("cities_g.txt");
					for (int i = rand() % 60 + 1; i < 61; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "д") {
					ifstream cities;
					cities.open("cities_d.txt");
					for (int i = rand() % 55 + 1; i < 56; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "е") {
					ifstream cities;
					cities.open("cities_e.txt");
					for (int i = rand() % 15 + 1; i < 16; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "ж") {
					ifstream cities;
					cities.open("cities_zh.txt");
					for (int i = rand() % 12 + 1; i < 13; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "з") {
					ifstream cities;
					cities.open("cities_z.txt");
					for (int i = rand() % 37 + 1; i < 38; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "и") {
					ifstream cities;
					cities.open("cities_i.txt");
					for (int i = rand() % 33 + 1; i < 34; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "й") {
					ifstream cities;
					cities.open("cities_iy.txt");
					for (int i = rand() % 6 + 1; i < 7; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "к") {
					ifstream cities;
					cities.open("cities_k.txt");
					for (int i = rand() % 214 + 1; i < 215; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "л") {
					ifstream cities;
					cities.open("cities_l.txt");
					for (int i = rand() % 69 + 1; i < 70; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "м") {
					ifstream cities;
					cities.open("cities_m.txt");
					for (int i = rand() % 95 + 1; i < 96; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "н") {
					ifstream cities;
					cities.open("cities_n.txt");
					for (int i = rand() % 99 + 1; i < 100; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "о") {
					ifstream cities;
					cities.open("cities_o.txt");
					for (int i = rand() % 46 + 1; i < 47; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "п") {
					ifstream cities;
					cities.open("cities_p.txt");
					for (int i = rand() % 90 + 1; i < 91; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "р") {
					ifstream cities;
					cities.open("cities_r.txt");
					for (int i = rand() % 37 + 1; i < 38; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "с") {
					ifstream cities;
					cities.open("cities_s.txt");
					for (int i = rand() % 154 + 1; i < 155; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "т") {
					ifstream cities;
					cities.open("cities_t.txt");
					for (int i = rand() % 74 + 1; i < 75; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "у") {
					ifstream cities;
					cities.open("cities_u.txt");
					for (int i = rand() % 37 + 1; i < 38; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "ф") {
					ifstream cities;
					cities.open("cities_f.txt");
					for (int i = rand() % 16 + 1; i < 17; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "х") {
					ifstream cities;
					cities.open("cities_h.txt");
					for (int i = rand() % 33 + 1; i < 34; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "ц") {
					ifstream cities;
					cities.open("cities_c.txt");
					for (int i = rand() % 12 + 1; i < 13; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "ч") {
					ifstream cities;
					cities.open("cities_ch.txt");
					for (int i = rand() % 37 + 1; i < 38; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "ш") {
					ifstream cities;
					cities.open("cities_sh.txt");
					for (int i = rand() % 32 + 1; i < 33; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "щ") {
					ifstream cities;
					cities.open("cities_sha.txt");
					for (int i = rand() % 7 + 1; i < 8; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "ы") {
					ifstream cities;
					cities.open("cities_ii.txt");
					for (int i = rand() % 16 + 1; i < 17; i++) {
						cities >> city;
					}
					cout << city;
				}
				else if (posl_buk_per == "э") {
				ifstream cities;
				cities.open("cities_ie.txt");
				for (int i = rand() % 16 + 1; i < 17; i++) {
					cities >> city;
				}
				cout << city;
			}
				else if (posl_buk_per == "ю") {
				ifstream cities;
				cities.open("cities_iyu.txt");
				for (int i = rand() % 12 + 1; i < 13; i++) {
					cities >> city;
				}
				cout << city;
			}
				else if (posl_buk_per == "я") {
				ifstream cities;
				cities.open("cities_ya.txt");
				for (int i = rand() % 13 + 1; i < 14; i++) {
					cities >> city;
				}
				cout << city;
			}
			}
			else if (posl_buk == "э") {
				ifstream cities;
				cities.open("cities_ie.txt");
				for (int i = rand() % 16 + 1; i < 17; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "ю") {
				ifstream cities;
				cities.open("cities_iyu.txt");
				for (int i = rand() % 12 + 1; i < 13; i++) {
					cities >> city;
				}
				cout << city;
			}
			else if (posl_buk == "я") {
				ifstream cities;
				cities.open("cities_ya.txt");
				for (int i = rand() % 13 + 1; i < 14; i++) {
					cities >> city;
				}
				cout << city;
			}
			povt = city;
			ofstream povtorki;
			povtorki.open("povtorki.txt");
			povtorki << povt;
			povtorki.close();
			if (kol_pov == 0) {
				kol_pov++;
				/*int i = 0;
				while (i < kol_pov) {
					ifstream povtorki;
					povtorki.open("povtorki.txt");
					povtorki >> city;
				}*/
			}
			
		}
	}
	return 0;
}
/*strcpy(bukvi, posl_buk.c_str());
		if (bukvi >= 'a' && bukvi <= 'z') {
			int alnum = bukvi - 'a';
			bukvi = 'A' + alnum;
		}*/
		/*if (posl_buk >= "а" && posl_buk <= "я" && posl_buk != "\0")
		{
			int temp = (int)n[i] - 32;
			cout << (char)temp;
		}

		/*ofstream city_pervie_bukvi;
		city_pervie_bukvi.open("pervie_bukvi.txt");
		city_pervie_bukvi << "А Б В Г Д Е Ё Ж З И Й К Л М Н О П Р С Т У Ф Х Ц Ч Ш Щ Э Ю Я";
		city_pervie_bukvi.close();

		ifstream city_pervie_bukvi_s;
		city_pervie_bukvi_s.open("pervie_bukvi.txt");
		for (int i = 0; i < 30; i++) {
			city_pervie_bukvi_s >> bukvi;
			if (bukvi == "А") {

			}
		}*/
		//city_pervie_bukvi_s >> bukvi;