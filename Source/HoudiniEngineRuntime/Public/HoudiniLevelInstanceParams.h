#pragma once
#include "CoreMinimal.h"
#include "LevelInstance/LevelInstanceTypes.h"
#include "HoudiniLevelInstanceParams.generated.h"

USTRUCT(BlueprintType)
struct HOUDINIENGINERUNTIME_API FHoudiniLevelInstanceParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELevelInstanceCreationType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OutputName;
    
    FHoudiniLevelInstanceParams();
};

