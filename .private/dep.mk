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

SECONDARY		:=	sed		\
					echo	\
					bash	\
					printf	\
					ranlib

DEPENDANCIES	:=	$(firstword $(RM))	\
					$(firstword $(CP))	\
					$(firstword $(LN))	\
					$(firstword $(CC))	\
					$(firstword $(AR))	\
					$(SECONDARY)

MISSING_SECONDARY	:=	$(strip \
	$(foreach dep,\
		$(SECONDARY),\
		$(shell which $(dep) >$(NULL) 2>&1 || echo '$(dep)')\
	)\
)

MISSING	:=	$(strip \
	$(foreach dep,\
		$(DEPENDANCIES),\
		$(shell which $(dep) >$(NULL) 2>&1 || echo '$(dep)')\
	)\
)

CAN_RUN	:=	$(if $(MISSING),,X)

FANCY_MODE	:=	$(if $(MISSING_SECONDARY),,X)
