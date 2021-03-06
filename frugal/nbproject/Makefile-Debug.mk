#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/Ingredient.o \
	${OBJECTDIR}/Recipe.o \
	${OBJECTDIR}/Recipe_Ingredients.o \
	${OBJECTDIR}/SOCIConnection.o \
	${OBJECTDIR}/Tag.o \
	${OBJECTDIR}/User.o \
	${OBJECTDIR}/main.o


# C Compiler Flags
CFLAGS=

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L/usr/local/include/soci

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/frugal.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/frugal.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/frugal ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Ingredient.o: Ingredient.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/soci -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Ingredient.o Ingredient.cpp

${OBJECTDIR}/Recipe.o: Recipe.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/soci -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Recipe.o Recipe.cpp

${OBJECTDIR}/Recipe_Ingredients.o: Recipe_Ingredients.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/soci -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Recipe_Ingredients.o Recipe_Ingredients.cpp

${OBJECTDIR}/SOCIConnection.o: SOCIConnection.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/soci -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/SOCIConnection.o SOCIConnection.cpp

${OBJECTDIR}/Tag.o: Tag.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/soci -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Tag.o Tag.cpp

${OBJECTDIR}/User.o: User.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/soci -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/User.o User.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -I/usr/local/include/soci -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
