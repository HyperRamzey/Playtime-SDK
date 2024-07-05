#include "..\FUObjectArray.hpp"
#include "..\_Script_AnimGraphRuntime\AnimSequencerInstance.hpp"
#include "ControlRigSequencerAnimInstance.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
_Script_CoreUObject::Class* _Script_ControlRig::ControlRigSequencerAnimInstance::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/ControlRig.ControlRigSequencerAnimInstance");
    return result;
}
