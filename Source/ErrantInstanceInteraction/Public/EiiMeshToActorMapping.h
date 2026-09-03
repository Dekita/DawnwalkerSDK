#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EiiMeshToActorMapping.generated.h"

class AActor;
class UStaticMesh;

UCLASS(Blueprintable)
class ERRANTINSTANCEINTERACTION_API UEiiMeshToActorMapping : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UStaticMesh>, TSoftClassPtr<AActor>> Mapping;
    
    UEiiMeshToActorMapping();

};

