################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (10.3-2021.10)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
D:/basecam/SBGC32_Library/sbgc32-serial-api/serialAPI/drivers/STM32_Driver/driver_STM32.c 

OBJS += \
./serialAPI/drivers/STM32_Driver/driver_STM32.o 

C_DEPS += \
./serialAPI/drivers/STM32_Driver/driver_STM32.d 


# Each subdirectory must supply rules for building sources it contributes
serialAPI/drivers/STM32_Driver/driver_STM32.o: D:/basecam/SBGC32_Library/sbgc32-serial-api/serialAPI/drivers/STM32_Driver/driver_STM32.c serialAPI/drivers/STM32_Driver/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m7 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F767xx -DSTM32_THREAD_SAFE_STRATEGY=2 -c -I../Core/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc -I../Drivers/STM32F7xx_HAL_Driver/Inc/Legacy -I../Drivers/CMSIS/Device/ST/STM32F7xx/Include -I../Drivers/CMSIS/Include -I../Core/ThreadSafe -I../../../../serialAPI -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv5-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-serialAPI-2f-drivers-2f-STM32_Driver

clean-serialAPI-2f-drivers-2f-STM32_Driver:
	-$(RM) ./serialAPI/drivers/STM32_Driver/driver_STM32.d ./serialAPI/drivers/STM32_Driver/driver_STM32.o ./serialAPI/drivers/STM32_Driver/driver_STM32.su

.PHONY: clean-serialAPI-2f-drivers-2f-STM32_Driver

