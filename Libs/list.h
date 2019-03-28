/**********************************************************************************************
Sintattica                            Semantica
nome del tipo: List;                  Dominio: Insieme di sequenza [a1, ..., an] di tipo Item
tipo di dati usati: item, boolean;    l'elemento nil rappresenta la lista vuota

newList() -> List;											newList() -> l;
																					•Post: l = nil

isEmpty(List) -> boolean;								isEmpty(l) -> b;
																					•Post: se l = nil allora b = true altrimenti b = false

addHead(List, Item) -> boolean;				isEmpty(l) -> b;
																					•Post: se l = nil allora b = true altrimenti b = false

**********************************************************************************************/

typedef struct list *List;