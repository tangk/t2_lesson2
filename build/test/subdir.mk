################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../test/AllTests.cpp \
../test/car_ut.cpp \
../test/cmd_ut.cpp 

OBJS += \
./test/AllTests.o \
./test/car_ut.o \
./test/cmd_ut.o 

CPP_DEPS += \
./test/AllTests.d \
./test/car_ut.d \
./test/cmd_ut.d 


# Each subdirectory must supply rules for building sources it contributes
test/%.o: ../test/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/root/boost_1_33_1 -I"/root/workspace/lesson2/include" -I"/root/workspace/lesson2/src" -I"/root/workspace/lesson2/testlib" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


