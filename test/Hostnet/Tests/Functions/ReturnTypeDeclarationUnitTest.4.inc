<?php
// Shameless copy from:
// https://gist.githubusercontent.com/michaelcullum/c025f3870c9ea1dd2668/raw/0b6bec832b1bb30689e2271d4e931ddfba378718/returnTypesSpacing.php

// Chosen approach is to consider the closing parameter bracket and
// colon look visually as one character so no space between parenthesis and colon
// and have a preceding space before the type declaration. Demonstrated in method
// named `this()`

namespace ReturnTypeVariations
{
    $func = function() use($a): string
    {
        return;
    };

    $func = function() use($a) :string
    {
        return;
    };

    $func = function() use($a) : string
    {
        return;
    };

    $func = function() use($a):string
    {
        return;
    };

    $func = function() use($a)
    :string{
        return;
    };

    $func = function() use($a)
    :string {
        return;
    };

    $func = function() use($a)
    : string {
        return;
    };

    $func = function() use($a)
    :string
    {
        return;
    };

    $func = function() use($a)
    : string
    {
        return;
    };

    $func = function() use($a):
    string
    {
        return;
    };

    $func = function() use($a)
    {
        return;
    };
}
