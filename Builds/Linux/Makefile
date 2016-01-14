# Automatically generated makefile, created by the Introjucer
# Don't edit this file! Your changes will be overwritten when you re-save the Introjucer project!

# (this disables dependency generation if multiple architectures are set)
DEPFLAGS := $(if $(word 2, $(TARGET_ARCH)), , -MMD)

ifndef CONFIG
  CONFIG=Debug
endif

ifeq ($(CONFIG),Debug)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Debug
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "DEBUG=1" -D "_DEBUG=1" -D "JUCER_LINUX_MAKE_7346DA2A=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I ../../JuceLibraryCode -I ../../../../JUCE/modules -I ../../../../Projects
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -g -ggdb -O0 -std=gnu++0x
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -L/usr/X11R6/lib/ -L/usr/lib/llvm-3.7/lib/ -lLLVMAArch64AsmParser -lLLVMAArch64AsmPrinter -lLLVMAArch64CodeGen -lLLVMAArch64Desc -lLLVMAArch64Disassembler -lLLVMAArch64Info -lLLVMAArch64Utils -lLLVMAMDGPUAsmParser -lLLVMAMDGPUAsmPrinter -lLLVMAMDGPUCodeGen -lLLVMAMDGPUDesc -lLLVMAMDGPUInfo -lLLVMAMDGPUUtils -lLLVMARMAsmParser -lLLVMARMAsmPrinter -lLLVMARMCodeGen -lLLVMARMDesc -lLLVMARMDisassembler -lLLVMARMInfo -lLLVMAnalysis -lLLVMAsmParser -lLLVMAsmPrinter -lLLVMBPFAsmPrinter -lLLVMBPFCodeGen -lLLVMBPFDesc -lLLVMBPFInfo -lLLVMBitReader -lLLVMBitWriter -lLLVMCodeGen -lLLVMCore -lLLVMCppBackendCodeGen -lLLVMCppBackendInfo -lLLVMDebugInfoDWARF -lLLVMDebugInfoPDB -lLLVMExecutionEngine -lLLVMHexagonCodeGen -lLLVMHexagonDesc -lLLVMHexagonDisassembler -lLLVMHexagonInfo -lLLVMIRReader -lLLVMInstCombine -lLLVMInstrumentation -lLLVMInterpreter -lLLVMLTO -lLLVMLibDriver -lLLVMLineEditor -lLLVMLinker -lLLVMMC -lLLVMMCDisassembler -lLLVMMCJIT -lLLVMMCParser -lLLVMMIRParser -lLLVMMSP430AsmPrinter -lLLVMMSP430CodeGen -lLLVMMSP430Desc -lLLVMMSP430Info -lLLVMMipsAsmParser -lLLVMMipsAsmPrinter -lLLVMMipsCodeGen -lLLVMMipsDesc -lLLVMMipsDisassembler -lLLVMMipsInfo -lLLVMNVPTXAsmPrinter -lLLVMNVPTXCodeGen -lLLVMNVPTXDesc -lLLVMNVPTXInfo -lLLVMObjCARCOpts -lLLVMObject -lLLVMOption -lLLVMOrcJIT -lLLVMPasses -lLLVMPowerPCAsmParser -lLLVMPowerPCAsmPrinter -lLLVMPowerPCCodeGen -lLLVMPowerPCDesc -lLLVMPowerPCDisassembler -lLLVMPowerPCInfo -lLLVMProfileData -lLLVMRuntimeDyld -lLLVMScalarOpts -lLLVMSelectionDAG -lLLVMSparcAsmParser -lLLVMSparcAsmPrinter -lLLVMSparcCodeGen -lLLVMSparcDesc -lLLVMSparcDisassembler -lLLVMSparcInfo -lLLVMSupport -lLLVMSystemZAsmParser -lLLVMSystemZAsmPrinter -lLLVMSystemZCodeGen -lLLVMSystemZDesc -lLLVMSystemZDisassembler -lLLVMSystemZInfo -lLLVMTableGen -lLLVMTarget -lLLVMTransformUtils -lLLVMVectorize -lLLVMX86AsmParser -lLLVMX86AsmPrinter -lLLVMX86CodeGen -lLLVMX86Desc -lLLVMX86Disassembler -lLLVMX86Info -lLLVMX86Utils -lLLVMXCoreAsmPrinter -lLLVMXCoreCodeGen -lLLVMXCoreDesc -lLLVMXCoreDisassembler -lLLVMXCoreInfo -lLLVMipa -lLLVMipo -lX11 -lXext -lXinerama -lcrypto -lcurses -ldl -lfaust -lfreetype -lpthread -lrt -lz 

  TARGET := juce_faustllvm_test
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

ifeq ($(CONFIG),Release)
  BINDIR := build
  LIBDIR := build
  OBJDIR := build/intermediate/Release
  OUTDIR := build

  ifeq ($(TARGET_ARCH),)
    TARGET_ARCH := -march=native
  endif

  CPPFLAGS := $(DEPFLAGS) -D "LINUX=1" -D "NDEBUG=1" -D "JUCER_LINUX_MAKE_7346DA2A=1" -D "JUCE_APP_VERSION=1.0.0" -D "JUCE_APP_VERSION_HEX=0x10000" -I /usr/include -I /usr/include/freetype2 -I ../../JuceLibraryCode -I ../../../../JUCE/modules -I ../../../../Projects
  CFLAGS += $(CPPFLAGS) $(TARGET_ARCH) -Os -std=gnu++0x
  CXXFLAGS += $(CFLAGS) -std=c++11
  LDFLAGS += $(TARGET_ARCH) -L$(BINDIR) -L$(LIBDIR) -fvisibility=hidden -L/usr/X11R6/lib/ -L/usr/lib/llvm-3.7/lib/ -lLLVMAArch64AsmParser -lLLVMAArch64AsmPrinter -lLLVMAArch64CodeGen -lLLVMAArch64Desc -lLLVMAArch64Disassembler -lLLVMAArch64Info -lLLVMAArch64Utils -lLLVMAMDGPUAsmParser -lLLVMAMDGPUAsmPrinter -lLLVMAMDGPUCodeGen -lLLVMAMDGPUDesc -lLLVMAMDGPUInfo -lLLVMAMDGPUUtils -lLLVMARMAsmParser -lLLVMARMAsmPrinter -lLLVMARMCodeGen -lLLVMARMDesc -lLLVMARMDisassembler -lLLVMARMInfo -lLLVMAnalysis -lLLVMAsmParser -lLLVMAsmPrinter -lLLVMBPFAsmPrinter -lLLVMBPFCodeGen -lLLVMBPFDesc -lLLVMBPFInfo -lLLVMBitReader -lLLVMBitWriter -lLLVMCodeGen -lLLVMCore -lLLVMCppBackendCodeGen -lLLVMCppBackendInfo -lLLVMDebugInfoDWARF -lLLVMDebugInfoPDB -lLLVMExecutionEngine -lLLVMHexagonCodeGen -lLLVMHexagonDesc -lLLVMHexagonDisassembler -lLLVMHexagonInfo -lLLVMIRReader -lLLVMInstCombine -lLLVMInstrumentation -lLLVMInterpreter -lLLVMLTO -lLLVMLibDriver -lLLVMLineEditor -lLLVMLinker -lLLVMMC -lLLVMMCDisassembler -lLLVMMCJIT -lLLVMMCParser -lLLVMMIRParser -lLLVMMSP430AsmPrinter -lLLVMMSP430CodeGen -lLLVMMSP430Desc -lLLVMMSP430Info -lLLVMMipsAsmParser -lLLVMMipsAsmPrinter -lLLVMMipsCodeGen -lLLVMMipsDesc -lLLVMMipsDisassembler -lLLVMMipsInfo -lLLVMNVPTXAsmPrinter -lLLVMNVPTXCodeGen -lLLVMNVPTXDesc -lLLVMNVPTXInfo -lLLVMObjCARCOpts -lLLVMObject -lLLVMOption -lLLVMOrcJIT -lLLVMPasses -lLLVMPowerPCAsmParser -lLLVMPowerPCAsmPrinter -lLLVMPowerPCCodeGen -lLLVMPowerPCDesc -lLLVMPowerPCDisassembler -lLLVMPowerPCInfo -lLLVMProfileData -lLLVMRuntimeDyld -lLLVMScalarOpts -lLLVMSelectionDAG -lLLVMSparcAsmParser -lLLVMSparcAsmPrinter -lLLVMSparcCodeGen -lLLVMSparcDesc -lLLVMSparcDisassembler -lLLVMSparcInfo -lLLVMSupport -lLLVMSystemZAsmParser -lLLVMSystemZAsmPrinter -lLLVMSystemZCodeGen -lLLVMSystemZDesc -lLLVMSystemZDisassembler -lLLVMSystemZInfo -lLLVMTableGen -lLLVMTarget -lLLVMTransformUtils -lLLVMVectorize -lLLVMX86AsmParser -lLLVMX86AsmPrinter -lLLVMX86CodeGen -lLLVMX86Desc -lLLVMX86Disassembler -lLLVMX86Info -lLLVMX86Utils -lLLVMXCoreAsmPrinter -lLLVMXCoreCodeGen -lLLVMXCoreDesc -lLLVMXCoreDisassembler -lLLVMXCoreInfo -lLLVMipa -lLLVMipo -lX11 -lXext -lXinerama -lcrypto -lcurses -ldl -lfaust -lfreetype -lpthread -lrt -lz 

  TARGET := juce_faustllvm_test
  BLDCMD = $(CXX) -o $(OUTDIR)/$(TARGET) $(OBJECTS) $(LDFLAGS) $(RESOURCES) $(TARGET_ARCH)
  CLEANCMD = rm -rf $(OUTDIR)/$(TARGET) $(OBJDIR)
endif

OBJECTS := \
  $(OBJDIR)/Main_90ebc5c2.o \
  $(OBJDIR)/juce_audio_basics_b230a8bc.o \
  $(OBJDIR)/juce_audio_processors_563f0674.o \
  $(OBJDIR)/juce_core_28ba299e.o \
  $(OBJDIR)/juce_data_structures_2a02f2da.o \
  $(OBJDIR)/juce_events_a3c29712.o \
  $(OBJDIR)/juce_faustllvm_624bbe35.o \
  $(OBJDIR)/juce_graphics_13419d76.o \
  $(OBJDIR)/juce_gui_basics_332d59f2.o \
  $(OBJDIR)/juce_gui_extra_6ca15ffa.o \

.PHONY: clean

$(OUTDIR)/$(TARGET): $(OBJECTS) $(RESOURCES)
	@echo Linking juce_faustllvm_test
	-@mkdir -p $(BINDIR)
	-@mkdir -p $(LIBDIR)
	-@mkdir -p $(OUTDIR)
	@$(BLDCMD)

clean:
	@echo Cleaning juce_faustllvm_test
	@$(CLEANCMD)

strip:
	@echo Stripping juce_faustllvm_test
	-@strip --strip-unneeded $(OUTDIR)/$(TARGET)

$(OBJDIR)/Main_90ebc5c2.o: ../../Source/Main.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling Main.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_basics_b230a8bc.o: ../../../../JUCE/modules/juce_audio_basics/juce_audio_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_audio_processors_563f0674.o: ../../../../JUCE/modules/juce_audio_processors/juce_audio_processors.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_audio_processors.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_core_28ba299e.o: ../../../../JUCE/modules/juce_core/juce_core.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_core.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_data_structures_2a02f2da.o: ../../../../JUCE/modules/juce_data_structures/juce_data_structures.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_data_structures.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_events_a3c29712.o: ../../../../JUCE/modules/juce_events/juce_events.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_events.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_faustllvm_624bbe35.o: ../../../juce_faustllvm/juce_faustllvm.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_faustllvm.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_graphics_13419d76.o: ../../../../JUCE/modules/juce_graphics/juce_graphics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_graphics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_basics_332d59f2.o: ../../../../JUCE/modules/juce_gui_basics/juce_gui_basics.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_basics.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

$(OBJDIR)/juce_gui_extra_6ca15ffa.o: ../../../../JUCE/modules/juce_gui_extra/juce_gui_extra.cpp
	-@mkdir -p $(OBJDIR)
	@echo "Compiling juce_gui_extra.cpp"
	@$(CXX) $(CXXFLAGS) -o "$@" -c "$<"

-include $(OBJECTS:%.o=%.d)
