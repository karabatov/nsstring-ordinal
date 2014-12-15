# NSString+Ordinal

NSString+Ordinal is an *NSString* category for spelling numbers as words. Specifically, it's intended for Russian ordinal numbers, for which, as far as I know, there is no direct iOS support. The category is tailored to work with numbers 0–200 in Russian and provides sensible defaults for any other number and locale.


What it does is it spells 1, 2, 3 as *первый*, *второй*, *третий* (first, second, third) in Russian and *one*, *two*, *three* in English, which is by design to be used in a phrase like «день первый» (the first day) in Russian and “day one” in English.

The category is a single method which accepts an integer:

```obj-c
+ (NSString *)ordinalRepresentationWithNumber:(NSInteger)ordinal;
```

This is probably reinventing the wheel, but I strongly believe in bootstrapped, self-written, simple solutions first. It works well for me because I know exactly how it works.

