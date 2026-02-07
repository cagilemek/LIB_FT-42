#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
	int *a;
	a = malloc (sizeof(int));
	*a = 9;
	ft_lstadd_back(&a, ft_lstnew("oo"));
	int **p = &a;
	ft_lstadd_back();

}/*
bir node oluştur ve onun adresini tut istediğin değeri at içine
elinde olan nod üzerinden 2 node daha oluştur ama onların adreslerini herhangi bi değişkene atmadan 
2. nodu tamamen sil 3. nodu kaybetme
bir dosyanın içinde her nodun içindeki yazıyı yazdır öceki yazlar silinmeden 
*/