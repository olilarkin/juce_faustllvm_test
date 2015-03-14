#include "../JuceLibraryCode/JuceHeader.h"

int main (int argc, char* argv[])
{
  FaustAudioPluginInstance pi;
  
  // Must initialize with Faust Libraries directory
  pi.initialize(File::getCurrentWorkingDirectory());
  pi.prepareToPlay(44100., 8);
  AudioSampleBuffer buffer(1, 8);
  MidiBuffer midiMessages;
  
  String inputSamplesStr;
  
  for (int i = 0; i< buffer.getNumSamples(); i++)
  {
    buffer.setSample(0, i, 1.f);
    inputSamplesStr << buffer.getSample(0, i) << " ";
  }
  
  Logger::getCurrentLogger()->writeToLog(inputSamplesStr);
  
  pi.setParameter(0, 0.5);
  pi.processBlock(buffer, midiMessages);
  
  String outputSamplesStr;
  
  for (int i = 0; i< buffer.getNumSamples(); i++)
  {
    outputSamplesStr << buffer.getSample(0, i) << " ";
  }
  
  Logger::getCurrentLogger()->writeToLog(outputSamplesStr);
  
  return 0;
}
