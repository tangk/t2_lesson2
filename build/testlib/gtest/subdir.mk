################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../testlib/gtest/gtest-all.cc 

OBJS += \
./testlib/gtest/gtest-all.o 

CC_DEPS += \
./testlib/gtest/gtest-all.d 


# Each subdirectory must supply rules for building sources it contributes
testlib/gtest/%.o: ../testlib/gtest/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/root/boost_1_33_1/ -I"/root/workspace/lesson2/testlib" -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


