#pragma once
#include "CoreMinimal.h"
#include "EReadableBackgroundType.generated.h"

UENUM(BlueprintType)
enum class EReadableBackgroundType : uint8 {
    None,
    Letter_01,
    Letter_02,
    Letter_burned_01,
    Letter_burned_02,
    Letter_soggy_01,
    Letter_soggy_02,
    Book_new_01,
    Book_new_02,
    Book_burned_01,
    Book_burned_02,
    Book_soggy_01,
    Book_soggy_02,
    Poster_01,
    Poster_02,
    Card_folded_01,
    Card_folded_02,
    Clay_Tablet_01,
    Book_Dirty_01,
    Letter_Dirty_01,
    Max,
};

