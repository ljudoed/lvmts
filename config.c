/*
 * Copyright (C) 2012 Hubert Kario <kario@wsisiz.edu.pl>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 *
 */

#include <stdlib.h>
#include <math.h>
#include "config.h"

// TODO stub
float
get_read_multiplier(struct program_params *pp, char *lv_name)
{
    return 1;
}

// TODO stub
float
get_write_multiplier(struct program_params *pp, char *lv_name)
{
    return 10;
}

// TODO stub
float
get_hit_score(struct program_params *pp, char *lv_name)
{
    return 16;
}

// TODO stub
float
get_score_scaling_factor(struct program_params *pp, char *lv_name)
{
    return pow(2,-15);
}

// TODO stub
char *
get_tier_device(struct program_params *pp, char *lv_name, int tier)
{
    static char *tiers[] = { "/dev/0",
                       "/dev/1",
                       "/dev/2",
                       "/dev/3",
                       "/dev/4"};

    return tiers[tier];
}

// TODO stub
float get_tier_pinning_score(struct program_params *pp, char *lv_name,
    int tier)
{
    return 20-tier*10;
}
