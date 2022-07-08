#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
AudioPluginAudioProcessorEditor::AudioPluginAudioProcessorEditor (AudioPluginAudioProcessor& p)
    : AudioProcessorEditor (&p), processorRef (p)
{
    specInverseButton.setButtonText("Spectral Inverse");
    specInverseButton.setClickingTogglesState(true);

    specReverseButton.setButtonText("Spectral Reverse");
    specReverseButton.setClickingTogglesState(true);


    addAndMakeVisible(specInverseButton);
    addAndMakeVisible(specReverseButton);

    juce::ignoreUnused (processorRef);
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

AudioPluginAudioProcessorEditor::~AudioPluginAudioProcessorEditor()
{
}

//==============================================================================
void AudioPluginAudioProcessorEditor::paint (juce::Graphics& g)
{
    specInverseButton.setBoundsRelative({0.2f, 0.5f, 0.3f, 0.2f});
    specReverseButton.setBoundsRelative({0.8f, 0.5f, 0.3f, 0.2f});
}

void AudioPluginAudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}
