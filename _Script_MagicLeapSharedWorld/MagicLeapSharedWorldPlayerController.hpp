#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\PlayerController.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MagicLeapSharedWorld {
struct MagicLeapSharedWorldLocalData;
}
namespace _Script_MagicLeapSharedWorld {
struct MagicLeapSharedWorldAlignmentTransforms;
}
namespace _Script_MagicLeapSharedWorld {
#pragma pack(push, 1)
struct MagicLeapSharedWorldPlayerController : public _Script_Engine::PlayerController {
    private: char pad_570[0x18]; public:
    static _Script_CoreUObject::Class* static_class();
    void ServerSetLocalWorldData(_Script_MagicLeapSharedWorld::MagicLeapSharedWorldLocalData& LocalWorldReplicationData);
    void ServerSetAlignmentTransforms(_Script_MagicLeapSharedWorld::MagicLeapSharedWorldAlignmentTransforms& InAlignmentTransforms);
    bool IsChosenOne();
    void ClientSetChosenOne(bool bChosenOne);
    void ClientMarkReadyForSendingLocalData();
    bool CanSendLocalDataToServer();
}; // Size: 0x588
#pragma pack(pop)
}
