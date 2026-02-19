NAME =		DiamondTrap
SRCS =		main.cpp			ClapTrap.cpp			ScavTrap.cpp		\
			FragTrap.cpp		DiamondTrap.cpp
BUILD =		./build/
OBJS =		$(addprefix $(BUILD), $(SRCS:%.cpp=%.o))
CXX =		c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -MMD -MP -g3 -Wno-shadow

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

$(BUILD):
	mkdir $@
	
$(BUILD)%.o: %.cpp | $(BUILD)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(BUILD)

fclean: clean
	rm -rf $(NAME)

re: fclean all

run: $(NAME)
	./$<

.PHONY: all clean fclean re run

.DEFAULT_GOAL = all

-include $(OBJS:%.o=%.d)
