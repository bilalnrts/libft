NAME		=	libft.a
CC			=	gcc
CCFLAG		=	-Wall -Wextra -Werror -I
INCLUDE		=	/inc
SRC			=	/src
OBJ			=	/obj
RM			=	rm -f
AR			=	ar rcs

FTIS_DIR	=	/ft_is
FTIS_FILES	=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FTLST_DIR	=	/ft_lst
FTLST_FILES	=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

FTMEM_DIR	=	/ft_mem
FTMEM_FILES	=	ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset

FTPUT_DIR	=	/ft_put
FTPUT_FILES	=	ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

FTSTR_DIR	=	/ft_str
FTSTR_FILES	=	ft_split ft_strchr ft_strcmp ft_strdup ft_striteri ft_strjoin \
				ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp ft_strnstr \
				ft_strrchr ft_strtrim ft_substr

FTTO_DIR	=	/ft_to
FTTO_FILES	=	ft_atoi ft_itoa ft_tolower ft_toupper

CONFTIS		=	$(addprefix $(FTIS_DIR), $(FTIS_FILES))
CONFTLST	=	$(addprefix $(FTLST_DIR), $(FTLST_FILES))
CONFTMEM	=	$(addprefix $(FTMEM_DIR), $(FTMEM_FILES))
CONFTPUT	=	$(addprefix $(FTPUT_DIR), $(FTPUT_FILES))
CONFTSTR	=	$(addprefix $(FTSTR_DIR), $(FTSTR_FILES))
CONFTTO		=	$(addprefix $(FTTO_DIR), $(FTTO_FILES))

FT_IS		=	$(addsuffix .c, $(addprefix $(SRC), $(CONFTIS)))
OBJFT_IS	=	$(addsuffix .o, $(addprefix $(OBJ), $(CONFTIS)))

FT_LST		=	$(addsuffix .c, $(addprefix $(SRC), $(CONFTIS)))
OBJFT_LST	=	$(addsuffix .o, $(addprefix $(OBJ), $(CONFTIS)))

FT_MEM		=	$(addsuffix .c, $(addprefix $(SRC), $(CONFTIS)))
OBJFT_MEM	=	$(addsuffix .o, $(addprefix $(OBJ), $(CONFTIS)))

FT_PUT		=	$(addsuffix .c, $(addprefix $(SRC), $(CONFTIS)))
OBJFT_PUT	=	$(addsuffix .o, $(addprefix $(OBJ), $(CONFTIS)))

FT_STR		=	$(addsuffix .c, $(addprefix $(SRC), $(CONFTIS)))
OBJFT_STR	=	$(addsuffix .o, $(addprefix $(OBJ), $(CONFTIS)))

FT_TO		=	$(addsuffix .c, $(addprefix $(SRC), $(CONFTIS)))
OBJFT_TO	=	$(addsuffix .o, $(addprefix $(OBJ), $(CONFTIS)))
