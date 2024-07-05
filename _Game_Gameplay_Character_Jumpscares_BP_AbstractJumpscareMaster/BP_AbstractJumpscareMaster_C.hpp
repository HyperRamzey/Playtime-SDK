#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\Actor.hpp"
namespace _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter {
struct BP_NetworkCharacter_C;
}
namespace _Script_Engine {
struct ArrowComponent;
}
namespace _Script_Engine {
struct SceneComponent;
}
namespace _Script_Engine {
struct Character;
}
namespace _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera {
struct BP_AbstractJumpscare_Camera_C;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct SoundBase;
}
namespace _Script_Engine {
struct CameraComponent;
}
namespace _Script_Engine {
struct PlayerController;
}
namespace _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscareMaster {
#pragma pack(push, 1)
struct BP_AbstractJumpscareMaster_C : public _Script_Engine::Actor {
    private: char pad_220[0x158]; public:
    void* get_UberGraphFrame();
    _Script_Engine::ArrowComponent*& get_Arrow();
    _Script_Engine::SceneComponent*& get_Scene();
    _Script_Engine::SceneComponent*& get_DefaultSceneRoot();
    float& get_Huggy_Jumpscare_Scale();
    float& get_Distance_From_Monster();
    float& get_Duration();
    float& get_BlendInTime();
    float& get_BlendOutTime();
    _Game_Player_TrainingDummy_CPPChildren_BP_NetworkCharacter::BP_NetworkCharacter_C*& get_TargetPlayer();
    _Script_Engine::Character*& get_Target_Monster();
    _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C*& get_Player_Camera();
    _Game_Gameplay_Character_Jumpscares_BP_AbstractJumpscare_Camera::BP_AbstractJumpscare_Camera_C*& get_Monster_Camera();
    void* get_Player_Original_Location();
    void* get_Player_Target_Location();
    void* get_Player_Target_Location_Based_on_MonsterPawn();
    void* get_Player_Original_Rotation();
    void* get_Player_Target_Rotation();
    float& get_Blend_Alpha();
    void* get_On_End_Jumpscare();
    void* get_Monster_Original_Location();
    void* get_Monster_Target_Location();
    void* get_Monster_Original_Rotation();
    void* get_Monster_Target_Rotation();
    void* get_Monster_Target_Control_Rotation();
    float& get_Delta_Seconds();
    _Script_Engine::Actor*& get_Players_Original_Owner();
    _Script_Engine::Actor*& get_Monsters_Original_Owner();
    bool get_Toggle_Players_Third_Person_After_();
    void set_Toggle_Players_Third_Person_After_(bool value);
    bool get_Toggle_Monsters_Third_Person_After_();
    void set_Toggle_Monsters_Third_Person_After_(bool value);
    void* get_On_Started_Jumpscare_Animation();
    bool get_Enough_Space_for_Jumpscare();
    void set_Enough_Space_for_Jumpscare(bool value);
    void* get_Monster_Type();
    float& get_Mommy_Jumpscare_Scale();
    float& get_Boxy_Jumpscare_Scale();
    float& get_Monster_Pawn_Scale();
    void* get_Monster_Forward_Ignoring_Z();
    float& get_Jumpscare_Scale();
    float& get_Jumpscare_Floor_Z();
    bool get_Monster_Is_Crouching_();
    void set_Monster_Is_Crouching_(bool value);
    void* get_Monster_End_Location();
    bool get_Monster_Crouch_After_Jumpscare();
    void set_Monster_Crouch_After_Jumpscare(bool value);
    bool get_Monster_Toggled_Crouch_Once();
    void set_Monster_Toggled_Crouch_Once(bool value);
    void* get_Actors_To_Ignore();
    static _Script_CoreUObject::Class* static_class();
    void Determine_If_Two_Locations_are_on_Stairs(_Script_CoreUObject::Vector A, _Script_CoreUObject::Vector B, float Check_Length, float Stairs_Threshold, bool& On_Stairs_);
    void Find_New_Location_if_Capsule_Intersects(_Script_CoreUObject::Vector Test_Position_Start, _Script_CoreUObject::Vector Test_Position_End, float Capsule_Radius, float Capsule_HalfHeight, bool Use_Start_If_Didnt_Hit, void*& ActorsToIgnore, void* DrawDebugType, _Script_CoreUObject::Vector& New_Location, bool& Hit);
    void Ground_Location_For_Pawn(_Script_CoreUObject::Vector Original_Location, _Script_CoreUObject::Vector Alternate_Location_On_Fail, _Script_CoreUObject::Vector Bound_To_Location, float Pawn_Half_Size, float Max_Angle, float Radius, bool Use_Floor_Hit_Z, _Script_CoreUObject::Vector& Found_Location);
    void Create_Floored_Original_Position_For_Pawn(_Script_CoreUObject::Vector Original_Location);
    void Get_Monster_Jumpscare_Sound(_Script_Engine::SoundBase*& Jumpscare_Sound);
    void Get_Monsters_Camera(_Script_Engine::CameraComponent*& Camera);
    void Transfer_B_Transforms_To_A(_Script_Engine::SceneComponent* A, _Script_Engine::SceneComponent* B);
    void Get_Is_Monster_In_Third_Person(bool& In_Third_Person);
    void Get_Target_Monsters_Player_Controller(_Script_Engine::PlayerController*& Controller);
    void Play_Jumpscare_Camera_Animations();
    void Play_Jumpscare_Character_Animations();
    void Set_Huggy_First_Person_Jumpscare_Transforms();
    void ReceiveTick0(float DeltaSeconds);
    void Toggle_Player_Third_Person_After_Jumpscare();
    void Toggle_Monster_Third_Person_After_Jumpscare();
    void Monster_Bind_Toggled_Third_Person_During_Jumpscare();
    void Set_Mommy_First_Person_Jumpscare_Transforms();
    void Kill_Player();
    void Set_Boxy_Boo_First_Person_Jumpscare_Transforms();
    void Finish_Jumpscare();
    void Trigger_Jumpscare();
    void Create_Original_and_Target_Transforms_for_Player();
    void Create_Original_and_Target_Transforms_For_Monster();
    void Play_Monster_Jumpscare();
    void Hide_UnHide_Monster_Character_Skeleton(bool Hide);
    void Hide_UnHide_Player_Character_Skeleton(bool Hide_Character);
    void End_Monster_Jumpscares();
    void Toggle_Third_Person_Views_If_Needed();
    void Find_Monsters_Pawn_Size_And_Forward_Direction_And_Floor_Z();
    void Monster_Bind_Crouch_During_Jumpscare();
    void Turn_On_Crouch_After_Jumpscare();
    void Turn_Off_Crouch_After_Jumpscare();
    void Set_Monsters_and_Players_Final_Locations();
    void ExecuteUbergraph_BP_AbstractJumpscareMaster(int32_t EntryPoint);
    void On_Started_Jumpscare_Animation__DelegateSignature();
    void On_End_Jumpscare__DelegateSignature();
}; // Size: 0x378
#pragma pack(pop)
}
