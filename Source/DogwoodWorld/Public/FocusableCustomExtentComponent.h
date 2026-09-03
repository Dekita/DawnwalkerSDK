#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FocusableComponent.h"
#include "FocusableCustomExtentComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DOGWOODWORLD_API UFocusableCustomExtentComponent : public UFocusableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CustomExtent;
    
    UFocusableCustomExtentComponent(const FObjectInitializer& ObjectInitializer);

};

