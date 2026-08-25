################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (14.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Inc/SegmentController.c 

OBJS += \
./Inc/SegmentController.o 

C_DEPS += \
./Inc/SegmentController.d 


# Each subdirectory must supply rules for building sources it contributes
Inc/%.o Inc/%.su Inc/%.cyclo: ../Inc/%.c Inc/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m0plus -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32G0 -DSTM32G031xx -DSTM32G031K8Tx -c -I../Inc -I"C:/Users/enesg/Documents/Fork/STM32-Projects/STM32-7segment4display-Project/include" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Inc

clean-Inc:
	-$(RM) ./Inc/SegmentController.cyclo ./Inc/SegmentController.d ./Inc/SegmentController.o ./Inc/SegmentController.su

.PHONY: clean-Inc

