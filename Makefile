CC := cc
CFLAGS := -Wall -Wextra -Werror -I
RM := rm -f
AR := ar rcs

LIBFT := libft
LIBFT_ARCH := $(LIBFT)/libft.a
NAME := libftprintf.a

SRCS := ft_printf.c printchar.c puthex.c \
       putptr.c putnbr.c putuint.c

OBJS := $(SRCS:%.c=%.o)
DEPS := $(OBJS:.o=.d)

GREEN := \033[0;32m
YELLOW := \033[0;33m
RED := \033[0;31m
RESET := \033[0m

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)[Compiled]$(RESET) $<"

-include $(DEPS)

$(LIBFT_ARCH):
	@echo "$(YELLOW)[Building libft...]$(RESET)"
	@$(MAKE) -s -C $(LIBFT)

$(NAME): $(OBJS) $(LIBFT_ARCH)
	@$(AR) $(NAME) $(OBJS)
	@$(AR) $(NAME) $(LIBFT_ARCH)
	@echo "$(GREEN)[OK] Library $(NAME) built successfully!$(RESET)"

clean:
	@echo "$(RED)[Cleaning objects...]$(RESET)"
	@$(RM) $(OBJS) $(DEPS)
	@if [ -f $(LIBFT_ARCH) ]; then $(MAKE) -s -C $(LIBFT) clean; fi

fclean: clean
	@echo "$(RED)[Cleaning libraries...]$(RESET)"
	@$(RM) $(NAME)
	@if [ -f $(LIBFT_ARCH) ]; then $(MAKE) -s -C $(LIBFT) fclean; fi

re: fclean all
