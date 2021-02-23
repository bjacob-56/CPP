
if [ $# -gt 0 ]; then

	mkdir -p srcs
	mkdir -p includes

	UPPER=$(echo $1 | tr a-z A-Z)

	sed -e "s/Template_class/$1/g" ../../template/Template.cpp > srcs/$1.cpp
	sed -e "s/Template_class/$1/g" ../../template/Template.hpp > includes/$1_temp.hpp
	sed -e "s/TEMPLATE_CLASS/$UPPER/g" includes/$1_temp.hpp > includes/$1.hpp
	rm -f includes/$1_temp.hpp

	sed -e "s/Template_class/$1/g" ../../template/main.cpp > srcs/main.cpp

	sed -e "s/Template_class/$1/g" ../../template/Makefile > Makefile

fi
