CC := cc
FLAGS := --Wall --Wextra --Werror
RM := rm -f

LIBFT := libft
LIBFT_A := $(LIBFT)/libft.a
NAME := libftprintf.a

SRCS := ft_printf.c printchar.c puthex.c putnbr.c putptr.c putstr.c putuint.c

OBJS := $(SRCS:%.c=%.o)


%.o: %.c $(LIBFT_A)
	gcc -c $< -o $@

all: $(OBJS)
	cd $(LIBFT) && make
	cp $(LIBFT_A) $(NAME)
	ar rcs $(NAME) $^ 
	
clean: 
	d $(LIBFT) && make cleanc
	$(RM) $(OBJS)

fclean: clean
	cd $(LIBFT) && make fclean
	$(RM) libft.a
	$(RM) $(NAME)

re: fclean all