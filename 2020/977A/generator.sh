#!/bin/bash
# ./generator.sh NUMBERS MIN_VALUE MAX_VALUE RANDOM_SEED OPTIONAL 
# OPTIONAL = --repeat for example

get_seeded_random()
{
  seed="$1"
  openssl enc -aes-256-ctr -pass pass:"$seed" -nosalt \
    </dev/zero 2>/dev/null
}

# shuf -i1-100 --random-source=<(get_seeded_random 42)

COMMAND="shuf -i ${2:-1}-${3:-100} -n ${1:-100}"

if [[ -n ${4} ]]; then
  COMMAND+=" --random-source=<(get_seeded_random ${4})"
fi

# OPTIONAL --repeat
COMMAND+=" ${5:-""}" 

ARRAY=$(eval $COMMAND)
echo ${1:-100}
echo $ARRAY
