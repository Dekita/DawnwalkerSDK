#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SaveGameInterface.h"
#include "RebelAudioPersistencySubsystem.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class REBELAUDIO_API URebelAudioPersistencySubsystem : public UTickableWorldSubsystem, public ISaveGameInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PersistentEventsResolverTable;
    
public:
    URebelAudioPersistencySubsystem();


    // Fix for true pure virtual functions not being implemented
};

