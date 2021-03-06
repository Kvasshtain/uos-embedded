Загрузчик NVBOOT
----------------

Загрузчик NVBOOT предназначен для хранения программ на базе uOS во флеш-памяти 
и их развёртывания и запуска из других областей памяти (в настоящий момент: 
CRAM и SDRAM). Загрузчик при включении питания инициализирует необходимый 
минимум аппаратных средств, копирует образ с uOS по сконфигурированному адресу 
и передаёт управление uOS.

Работа с загрузчиком
--------------------

Загрузчик собирается командой make. 
Запись загрузчика в плату осуществляется по команде make load. При этом сначала 
собирается бинарный образ из самого загрузчика и бинарного файла с прикладной 
программой. Базовая часть имени файла с прикладной программой указывается в 
Makefile в переменной APPLICATION, расширение файла всегда должно быть .bin. 
Данный файл должен находиться в директории utils/nvboot (где и сам загрузчик). 
Таким образом, алгоритм записи на плату такой:
1) скопировать бинарный файл (.bin) с прикладной программой в директорию 
utils/nvboot;
2) переименовать этой файл в app.bin (по умолчанию APPLICATION=app), либо 
изменить значение переменной APPLICATION в Makefile на необходимое;
3) make load

Конфигурирование
----------------

Помимо стандартных для uOS параметров в target.cfg загрузчика можно изменить 
следующие настройки:
1) NVBOOT_DEST_ADDRESS - адрес, по которому будет размещён образ с прикладной 
программой при включении платы. В настоящей версии имеют смысл только два 
значения: 0x98000000 - CRAM, 0x80000000 - SDRAM.
2) NVBOOT_SILENT_MODE - "молчаливый" режим. По умолчанию загрузчик печатает на 
отладочную консоль параметры образа: адрес во флеш, размер, а также осуществляет
проверку корректности копирования прикладного образа из флеш по указанному 
адресу. Это поведение можно отключить, указав флаг препроцессору 
NVBOOT_SILENT_MODE, тогда загрузчик сделает всё без лишних действий и печатей.


TODO. Размер самого загрузчика в "молчаливом" режиме можно сделать существенно 
меньше.
