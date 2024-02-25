-- Count IP Addresses
-- PostgreSQL 13.0

SELECT id, last::inet - first::inet AS ips_between FROM ip_addresses;