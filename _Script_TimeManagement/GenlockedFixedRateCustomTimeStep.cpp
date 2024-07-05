#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "GenlockedCustomTimeStep.hpp"
#include "GenlockedFixedRateCustomTimeStep.hpp"
void* _Script_TimeManagement::GenlockedFixedRateCustomTimeStep::get_FrameRate() {
    return (void*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_TimeManagement::GenlockedFixedRateCustomTimeStep::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/TimeManagement.GenlockedFixedRateCustomTimeStep");
    return result;
}
