#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "LoadedStringTable.h"
#include "DogwoodStringTableLoader.generated.h"

UCLASS(Blueprintable)
class DOGWOODUTIL_API UDogwoodStringTableLoader : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLoadedStringTable InteractionStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLoadedStringTable TraversalStringTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLoadedStringTable ToastStringTable;
    
public:
    UDogwoodStringTableLoader();

};

