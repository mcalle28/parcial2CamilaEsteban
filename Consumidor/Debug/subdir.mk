################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../consumidor.cc 

CC_DEPS += \
./consumidor.d 

OBJS += \
./consumidor.o 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	g++ -I"C:\Users\Juan Esteban\Desktop\IPC\include" -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


