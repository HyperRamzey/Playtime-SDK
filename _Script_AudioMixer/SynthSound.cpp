#include "..\FUObjectArray.hpp"
#include "SynthComponent.hpp"
#include "SynthSound.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\SoundWaveProcedural.hpp"
_Script_AudioMixer::SynthComponent*& _Script_AudioMixer::SynthSound::get_OwningSynthComponent() {
    return *(_Script_AudioMixer::SynthComponent**)((uintptr_t)this + 0x3c0);
}
_Script_CoreUObject::Class* _Script_AudioMixer::SynthSound::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AudioMixer.SynthSound");
    return result;
}
