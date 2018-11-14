# libft
Cette lib contiens l'ensemble des fonctions requises par le projet **libft** de 42 ainsi que quelques fonctions "bonus" que j'ai trouvé utile d'ajouter a un moment ou un autre de mon cursus.

## liste des fonctions :
* **ft_atoi**
* **ft_bzero**
* **ft_isalnum**
* **ft_isalpha**
* **ft_isascii**
* **ft_isdigit**
* **ft_isprint**
* **ft_itoa**
* **ft_lstadd**
* **ft_lstdel**
* **ft_lstdelone**
* **ft_lstiter**
* **ft_lstmap**
* **ft_lstnew**
* **ft_memalloc**
* **ft_memccpy**
* **ft_memchr**
* **ft_memcmp**
* **ft_memcpy**
* **ft_memdel**
* **ft_memmove**
* **ft_memset**
* **ft_putchar**
* **ft_putchar_fd**
* **ft_putendl**
* **ft_putendl_fd**
* **ft_putnbr**
* **ft_putnbr_fd**
* **ft_putstr**
* **ft_putstr_fd**
* **ft_strcat**
* **ft_strchr**
* **ft_strclr**
* **ft_strcmp**
* **ft_strcpy**
* **ft_strdel**
* **ft_strdup**
* **ft_strequ**
* **ft_striter**
* **ft_striteri**
* **ft_strjoin**
* **ft_strlcat**
* **ft_strlen**
* **ft_strmap**
* **ft_strmapi**
* **ft_strncat**
* **ft_strncmp**
* **ft_strncpy**
* **ft_strnequ**
* **ft_strnew**
* **ft_strnstr**
* **ft_strrchr**
* **ft_strsplit**
* **ft_strstr**
* **ft_strsub**
* **ft_strtrim**
* **ft_tolower**
* **ft_toupper**

## liste des fonctions bonus :
* **ft_contains**
	```C
	char	ft_contains(char c, const char *str);
	```
	Retourne `1` si ***`c`*** est présent dans la chaîne ***`str`*** et retourne `0` dans le cas contraire.

* **ft_atol_base**
	```C
	long	ft_atol_base(const char *str, const char *base);
	```
	Parse la chaîne ***`str`*** contenant un nombre écrit avec la base ***`base`*** et retourne le resultat sous la forme d'un `signed long int`.

* **ft_idxof**
	```C
	size_t	ft_idxof(char c, const char *str);
	```
	Retourne l'index de la premiere occurence de ***`c`*** dans la chaîne ***`str`*** et retourne `strlen(str)` si c n'est pas présent.

* **ft_isbase**
	```C
		char	ft_isbase(const char *base);
	```
	Retourne `1` si la chaîne ***`str`*** constitue une *base* valide (deux carractères uniques ou plus).

* **ft_islower**
	```C
	char	ft_islower(char c);
	```
	Retourne `1` si le carractère ***`c`*** est une lettre minuscule.

* **ft_isupper**
	```C
	char	ft_isupper(char c);
	```
	Retourne `1` si le carractère ***`c`*** est une lettre majuscule.

* **ft_putnbr_base**
	```C
	void	ft_putnbr_base(int n, const char *base);
	```
	Ecrit le nombre ***`n`*** dans la base ***`base`*** sur la sortie standard`0`.

* **ft_putnbr_base_fd**
	```C
	void	ft_putnbr_base_fd(int n, const char *base, int fd);
	```
	Ecrit le nombre ***`n`*** dans la base ***`base`*** sur le descripteur de fichier ***`fd`*** .
