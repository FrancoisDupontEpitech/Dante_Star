##
## EPITECH PROJECT, 2020
## makefile
## File description:
## makefile
##

GENERATOR	=	generator/

SOLVER	=	solver/

all:
	$(MAKE) -C $(GENERATOR)
	$(MAKE) -C $(SOLVER)

clean:
	$(MAKE) clean -C $(GENERATOR)
	$(MAKE) clean -C $(SOLVER)

fclean:
	$(MAKE) fclean -C $(GENERATOR)
	$(MAKE) fclean -C $(SOLVER)

re:	fclean all

.PHONY	=	all clean fclean re
