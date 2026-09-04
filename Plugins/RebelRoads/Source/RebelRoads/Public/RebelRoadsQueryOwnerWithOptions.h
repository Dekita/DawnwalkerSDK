#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "RebelRoadsQueryOwnerWithOptions.generated.h"

UCLASS(Blueprintable)
class REBELROADS_API URebelRoadsQueryOwnerWithOptions : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* QueryOwner;
    
public:
    URebelRoadsQueryOwnerWithOptions();

};

