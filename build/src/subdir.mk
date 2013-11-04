################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/car.cpp \
../src/commandline.cpp \
../src/tire.cpp \
../src/tiretypes.cpp 

OBJS += \
./src/car.o \
./src/commandline.o \
./src/tire.o \
./src/tiretypes.o 

CPP_DEPS += \
./src/car.d \
./src/commandline.d \
./src/tire.d \
./src/tiretypes.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I"/root/workspace/lesson2/include" -I/root/boost_1_33_1/ -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


