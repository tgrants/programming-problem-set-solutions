import calendar

dt = input().split() # date
wd = calendar.weekday(int(dt[2]), int(dt[0]), int(dt[1])) # weekday
print(calendar.day_name[wd].upper())
