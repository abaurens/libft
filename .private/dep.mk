# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    variables.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/07/04 01:35:40 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NULL			:=	/dev/null
DEPENDANCIES	:=	$(firstword $(RM))	\
					$(firstword $(CP))	\
					$(firstword $(LN))	\
					$(firstword $(CC))	\
					sed		\
					echo	\
					bash	\
					printf	\
					ranlib

MISSING	:=	$(strip \
	$(foreach dep,\
		$(DEPENDANCIES),\
		$(shell which $(dep) >$(NULL) 2>&1 || echo '$(dep)')\
	)\
)

CAN_RUN	:=	$(if $(MISSING),,X)
