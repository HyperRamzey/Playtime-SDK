#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_MovieScene\MovieSceneEntitySystem.hpp"
#include "TemplateSequencePropertyScalingEvaluatorSystem.hpp"
_Script_CoreUObject::Class* _Script_TemplateSequence::TemplateSequencePropertyScalingEvaluatorSystem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TemplateSequence.TemplateSequencePropertyScalingEvaluatorSystem");
    return result;
}
