#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ChatSubsystem.generated.h"

class UVoiceSetChat;

UCLASS(Blueprintable)
class DOGWOODDIALOGUE_API UChatSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UVoiceSetChat*> ActiveVoiceSetChats;
    
public:
    UChatSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanStartNewVoiceTagDialogue() const;
    
};

