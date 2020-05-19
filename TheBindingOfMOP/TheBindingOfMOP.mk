##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=TheBindingOfMOP
ConfigurationName      :=Debug
WorkspacePath          :=/home/mac/Documents/mop/mopWorkspace
ProjectPath            :=/home/mac/Documents/mop/mopWorkspace/TheBindingOfMOP
IntermediateDirectory  :=$(ConfigurationName)
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Mac
Date                   :=19/05/20
CodeLitePath           :=/home/mac/.codelite
LinkerName             :=/usr/share/codelite/tools/gcc-arm/bin/arm-none-eabi-g++
SharedObjectLinkerName :=/usr/share/codelite/tools/gcc-arm/bin/arm-none-eabi-g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="TheBindingOfMOP.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -T$(ProjectPath)/md407-ram.x -L$(ARM_V6LIB) -L$(ARM_GCC_V6LIB) -nostartfiles
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)gcc $(LibrarySwitch)c_nano 
ArLibs                 :=  "gcc" "c_nano" 
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/share/codelite/tools/gcc-arm/bin/arm-none-eabi-ar rcu
CXX      := /usr/share/codelite/tools/gcc-arm/bin/arm-none-eabi-g++
CC       := /usr/share/codelite/tools/gcc-arm/bin/arm-none-eabi-gcc
CXXFLAGS :=  -g -O0 -W $(Preprocessors)
CFLAGS   :=  -g -O0 -w -mthumb -march=armv6-m  -mfloat-abi=soft -std=c99 $(Preprocessors)
ASFLAGS  := 
AS       := /usr/share/codelite/tools/gcc-arm/bin/arm-none-eabi-as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
ARM_V6LIB:=$(CodeLiteDir)/tools/gcc-arm/arm-none-eabi/lib/thumb/v6-m/nofp
ARM_GCC_V6LIB:=$(CodeLiteDir)/tools/gcc-arm/lib/gcc/arm-none-eabi/9.2.1/thumb/v6-m/nofp
ARM_M4SFPLIB:=$(CodeLiteDir)/tools/gcc-arm/arm-none-eabi/lib/thumb/v7e-m+fp/softfp
ARM_GCC_M4SFPLIB:=$(CodeLiteDir)/tools/gcc-arm/lib/gcc/arm-none-eabi/9.2.1/thumb/v7e-m+fp/softfp
ARM_M4HFPLIB:=$(CodeLiteDir)/tools/gcc-arm/arm-none-eabi/lib/thumb/v7e-m+fp/hard
ARM_GCC_M4HFPLIB:=$(CodeLiteDir)/tools/gcc-arm/lib/gcc/arm-none-eabi/9.2.1/thumb/v7e-m+fp/hard
Objects0=$(IntermediateDirectory)/objects.c$(ObjectSuffix) $(IntermediateDirectory)/delay.c$(ObjectSuffix) $(IntermediateDirectory)/startup.c$(ObjectSuffix) $(IntermediateDirectory)/draw.c$(ObjectSuffix) $(IntermediateDirectory)/keypad.c$(ObjectSuffix) $(IntermediateDirectory)/init.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

PostBuild:
	@echo Executing Post Build commands ...
	/usr/share/codelite/tools/gcc-arm/bin/arm-none-eabi-objcopy -S -O srec  Debug/TheBindingOfMOP.elf Debug/TheBindingOfMOP.s19
	/usr/share/codelite/tools/gcc-arm/bin/arm-none-eabi-objdump -D -S Debug/TheBindingOfMOP.elf > Debug/TheBindingOfMOP.dass
	@echo Done

MakeIntermediateDirs:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)


$(IntermediateDirectory)/.d:
	@test -d $(ConfigurationName) || $(MakeDirCommand) $(ConfigurationName)

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/objects.c$(ObjectSuffix): objects.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/objects.c$(ObjectSuffix) -MF$(IntermediateDirectory)/objects.c$(DependSuffix) -MM objects.c
	$(CC) $(SourceSwitch) "/home/mac/Documents/mop/mopWorkspace/TheBindingOfMOP/objects.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/objects.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/objects.c$(PreprocessSuffix): objects.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/objects.c$(PreprocessSuffix) objects.c

$(IntermediateDirectory)/delay.c$(ObjectSuffix): delay.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/delay.c$(ObjectSuffix) -MF$(IntermediateDirectory)/delay.c$(DependSuffix) -MM delay.c
	$(CC) $(SourceSwitch) "/home/mac/Documents/mop/mopWorkspace/TheBindingOfMOP/delay.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/delay.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/delay.c$(PreprocessSuffix): delay.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/delay.c$(PreprocessSuffix) delay.c

$(IntermediateDirectory)/startup.c$(ObjectSuffix): startup.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/startup.c$(ObjectSuffix) -MF$(IntermediateDirectory)/startup.c$(DependSuffix) -MM startup.c
	$(CC) $(SourceSwitch) "/home/mac/Documents/mop/mopWorkspace/TheBindingOfMOP/startup.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/startup.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/startup.c$(PreprocessSuffix): startup.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/startup.c$(PreprocessSuffix) startup.c

$(IntermediateDirectory)/draw.c$(ObjectSuffix): draw.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/draw.c$(ObjectSuffix) -MF$(IntermediateDirectory)/draw.c$(DependSuffix) -MM draw.c
	$(CC) $(SourceSwitch) "/home/mac/Documents/mop/mopWorkspace/TheBindingOfMOP/draw.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/draw.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/draw.c$(PreprocessSuffix): draw.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/draw.c$(PreprocessSuffix) draw.c

$(IntermediateDirectory)/keypad.c$(ObjectSuffix): keypad.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/keypad.c$(ObjectSuffix) -MF$(IntermediateDirectory)/keypad.c$(DependSuffix) -MM keypad.c
	$(CC) $(SourceSwitch) "/home/mac/Documents/mop/mopWorkspace/TheBindingOfMOP/keypad.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/keypad.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/keypad.c$(PreprocessSuffix): keypad.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/keypad.c$(PreprocessSuffix) keypad.c

$(IntermediateDirectory)/init.c$(ObjectSuffix): init.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/init.c$(ObjectSuffix) -MF$(IntermediateDirectory)/init.c$(DependSuffix) -MM init.c
	$(CC) $(SourceSwitch) "/home/mac/Documents/mop/mopWorkspace/TheBindingOfMOP/init.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/init.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/init.c$(PreprocessSuffix): init.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/init.c$(PreprocessSuffix) init.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r $(ConfigurationName)/


