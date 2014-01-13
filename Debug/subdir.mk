################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../Aggregate.cpp \
../CAjouterAgg.cpp \
../CAjouterCercle.cpp \
../CAjouterLigne.cpp \
../CAjouterPolyligne.cpp \
../CAjouterRectangle.cpp \
../CDelete.cpp \
../CLoad.cpp \
../CMove.cpp \
../CUndo.cpp \
../CliParser.cpp \
../Commande.cpp \
../ElemtGeo.cpp \
../FCercle.cpp \
../FLigne.cpp \
../FPolyLigne.cpp \
../FRectangle.cpp \
../Point.cpp \
../main.cpp 

OBJS += \
./Aggregate.o \
./CAjouterAgg.o \
./CAjouterCercle.o \
./CAjouterLigne.o \
./CAjouterPolyligne.o \
./CAjouterRectangle.o \
./CDelete.o \
./CLoad.o \
./CMove.o \
./CUndo.o \
./CliParser.o \
./Commande.o \
./ElemtGeo.o \
./FCercle.o \
./FLigne.o \
./FPolyLigne.o \
./FRectangle.o \
./Point.o \
./main.o 

CPP_DEPS += \
./Aggregate.d \
./CAjouterAgg.d \
./CAjouterCercle.d \
./CAjouterLigne.d \
./CAjouterPolyligne.d \
./CAjouterRectangle.d \
./CDelete.d \
./CLoad.d \
./CMove.d \
./CUndo.d \
./CliParser.d \
./Commande.d \
./ElemtGeo.d \
./FCercle.d \
./FLigne.d \
./FPolyLigne.d \
./FRectangle.d \
./Point.d \
./main.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


