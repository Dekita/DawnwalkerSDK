#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelRoadsPathFindingQueryOwnerWithContext.generated.h"

UCLASS(Blueprintable)
class REBELROADS_API URebelRoadsPathFindingQueryOwnerWithContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
    URebelRoadsPathFindingQueryOwnerWithContext();

};

