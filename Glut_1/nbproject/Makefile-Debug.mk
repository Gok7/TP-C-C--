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
CC=gcc.exe
CCC=g++.exe
CXX=g++.exe
FC=gfortran
AS=as.exe

# Macros
CND_PLATFORM=MinGW-Windows
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
	${OBJECTDIR}/C_AQUARIUM.o \
	${OBJECTDIR}/C_CUBE.o \
	${OBJECTDIR}/C_ESPACE.o \
	${OBJECTDIR}/C_FIGURE.o \
	${OBJECTDIR}/C_LISTE_POISSON.o \
	${OBJECTDIR}/C_POISSON.o \
	${OBJECTDIR}/C_SPHERE.o \
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
LDLIBSOPTIONS=-Lglut -lglut32 -lglu32 -lopengl32

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/glut_1.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/glut_1.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/glut_1 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/C_AQUARIUM.o: C_AQUARIUM.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -Iglut -std=c++11 -MMD -MP -MF $@.d -o ${OBJECTDIR}/C_AQUARIUM.o C_AQUARIUM.cpp

${OBJECTDIR}/C_CUBE.o: C_CUBE.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -Iglut -std=c++11 -MMD -MP -MF $@.d -o ${OBJECTDIR}/C_CUBE.o C_CUBE.cpp

${OBJECTDIR}/C_ESPACE.o: C_ESPACE.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -Iglut -std=c++11 -MMD -MP -MF $@.d -o ${OBJECTDIR}/C_ESPACE.o C_ESPACE.cpp

${OBJECTDIR}/C_FIGURE.o: C_FIGURE.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -Iglut -std=c++11 -MMD -MP -MF $@.d -o ${OBJECTDIR}/C_FIGURE.o C_FIGURE.cpp

${OBJECTDIR}/C_LISTE_POISSON.o: C_LISTE_POISSON.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -Iglut -std=c++11 -MMD -MP -MF $@.d -o ${OBJECTDIR}/C_LISTE_POISSON.o C_LISTE_POISSON.cpp

${OBJECTDIR}/C_POISSON.o: C_POISSON.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -Iglut -std=c++11 -MMD -MP -MF $@.d -o ${OBJECTDIR}/C_POISSON.o C_POISSON.cpp

${OBJECTDIR}/C_SPHERE.o: C_SPHERE.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -Iglut -std=c++11 -MMD -MP -MF $@.d -o ${OBJECTDIR}/C_SPHERE.o C_SPHERE.cpp

${OBJECTDIR}/main.o: main.cpp 
	${MKDIR} -p ${OBJECTDIR}
	${RM} $@.d
	$(COMPILE.cc) -g -Iglut -std=c++11 -MMD -MP -MF $@.d -o ${OBJECTDIR}/main.o main.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/glut_1.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
