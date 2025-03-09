trajets: main.o Catalogue.o Element.o ListeChainee.o Trajet.o TrajetCompose.o TrajetSimple.o
	g++ -g -DMAP -o trajets main.o Catalogue.o Element.o ListeChainee.o Trajet.o TrajetCompose.o TrajetSimple.o
Catalogue.o : Catalogue.cpp 
	g++ -DMAP -c Catalogue.cpp 
Element.o : Element.cpp
	g++ -DMAP -c Element.cpp 
ListeChainee.o : ListeChainee.cpp
	g++ -DMAP -c ListeChainee.cpp
TrajetCompose.o : TrajetCompose.cpp
	g++ -DMAP -c TrajetCompose.cpp
Trajet.o: Trajet.cpp
	g++ -DMAP -c Trajet.cpp
TrajetSimple.o: TrajetSimple.cpp
	g++ -DMAP -c TrajetSimple.cpp
clean: 
	rm -f trajets main.o Catalogue.o Element.o ListeChainee.o Trajet.o TrajetCompose.o TrajetSimple.o