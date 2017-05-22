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
CND_PLATFORM=GNU-Linux-x86
CND_DLIB_EXT=so
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/ANSI\ sequences.o \
	${OBJECTDIR}/argc\ and\ argv.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/simple\ files.o \
	${OBJECTDIR}/structures\ 1.o \
	${OBJECTDIR}/structures\ 2.o \
	${OBJECTDIR}/the\ stack.o


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
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/test-of-git-and-multiple-files

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/test-of-git-and-multiple-files: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/test-of-git-and-multiple-files ${OBJECTFILES} ${LDLIBSOPTIONS}

.NO_PARALLEL:${OBJECTDIR}/ANSI\ sequences.o
${OBJECTDIR}/ANSI\ sequences.o: ANSI\ sequences.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/ANSI\ sequences.o ANSI\ sequences.c

.NO_PARALLEL:${OBJECTDIR}/argc\ and\ argv.o
${OBJECTDIR}/argc\ and\ argv.o: argc\ and\ argv.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/argc\ and\ argv.o argc\ and\ argv.c

${OBJECTDIR}/main.o: main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

.NO_PARALLEL:${OBJECTDIR}/simple\ files.o
${OBJECTDIR}/simple\ files.o: simple\ files.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/simple\ files.o simple\ files.c

.NO_PARALLEL:${OBJECTDIR}/structures\ 1.o
${OBJECTDIR}/structures\ 1.o: structures\ 1.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/structures\ 1.o structures\ 1.c

.NO_PARALLEL:${OBJECTDIR}/structures\ 2.o
${OBJECTDIR}/structures\ 2.o: structures\ 2.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/structures\ 2.o structures\ 2.c

.NO_PARALLEL:${OBJECTDIR}/the\ stack.o
${OBJECTDIR}/the\ stack.o: the\ stack.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/the\ stack.o the\ stack.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/test-of-git-and-multiple-files

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
