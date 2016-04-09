# juce_faustllvm CLI test project

This is an Introjucer project for building a command line app to test the [juce_faustllvm](https://github.com/olilarkin/juce_faustllvm) JUCE module. 

##Dependencies:

Due to the complexity of this project please closely follow the instructions:

**JUCE**

juce_faustllvm_test is built using JUCE and the .jucer project expects to find the JUCE source and the juce_faustllvm juce modules source in a directory relative to the juce_faustllvm_test source code. On my development machine the paths are like this...

~/Dev/MyJUCEProjects/JUCE  
~/Dev/MyJUCEProjects/Projects/juce_faustllvm  
~/Dev/MyJUCEProjects/Projects/juce_faustllvm_test  

the paths to these things can be modified via the .jucer project

**JUCE_FAUSTLLVM Module Dependencies**

There are more dependencies which are described in the juce_faustllvm [README.md](https://github.com/olilarkin/juce_faustllvm)

**License:**

  Written by Oliver Larkin  
  License: N/A  
  www.olilarkin.co.uk