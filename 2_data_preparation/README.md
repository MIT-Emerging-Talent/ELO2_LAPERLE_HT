# Data Preparation

## Haiti Tourism Data Pipeline

A clean, reproducible, and fully documented data foundation built from official
UNWTO sources

This project transforms the raw and often unwieldy United Nations World Tourism Organization
(UNWTO) Compendium of Tourism Statistics into clear, structured,
and analysis-ready datasets — with a special focus on **Haiti**
and a complete comparative panel of **30 Caribbean countries and territories**.
 The data cover the full available series from **1995 to 2022**.

## Project Structure

### 1. `Extract_data_haiti_and_caribbean.ipynb`

**Objective**: Fast, reliable, and one-time raw extraction from massive global files

- Loads the four official UNWTO Excel workbooks (Arrivals, Purpose, Mode of Transport,
 and Expenditure)
- Isolates every single record belonging to Haiti across all sheets and years  
- Simultaneously pulls the same indicators for 30 Caribbean countries
  and territories for regional comparison  
- Saves compact, raw extracted subsets as CSVs (one file per indicator)  

### 2. `script_UN_tourism_caribbean_countries_cleaned.ipynb`

**Objective**: Deliver one unified, tidy dataset for the entire Caribbean region

- Removes all metadata clutter (flags, country codes, footnotes, notes)
- Applies intuitive and consistent column names `country_receiving`, `year`, `number_of_tourists`.
- Harmonizes visitor categories across countries and years:  
 • Tourists (overnight visitors)  
 • Excursionists (same-day visitors)  
 • Total visitors  
- Final output: **3,025 rows** of clean,
 immediately usable Caribbean-wide tourism data

### 3. `cleaned_data_haiti.ipynb`

**Objective**: Produce publication-grade, Haiti-only datasets  
Four focused and meticulously cleaned tables:

- Arrivals by type of visitor
- Purpose of visit (business, personal, total) – 66 rows
- Mode of transport (air, sea/water, all modes combined)
- Tourism expenditure and receipts (in current US$) – 28 rows

Every file features simple column names, correct data types,
transparent handling of missing values, and complete removal
 of long original UN labels.

## Conclusion – Ready for Impact

What started as sprawling, hard-to-navigate global spreadsheets has become a
**clean, trustworthy, and fully documented data foundation** that finally lets
the real story of Haitian and Caribbean tourism emerge clearly.

These datasets are now ready to power:  

- Policy briefs and evidence-based recovery strategies for Haiti’s tourism sector
- Academic research and economic impact studies  
- Interactive dashboards and compelling data visualizations  
- Regional benchmarking and competitiveness analyses  

In just three transparent and reproducible notebooks, complex international
statistics have been transformed into clear, actionable evidence.

The numbers cleaned here are more than data points they are the solid
groundwork for informed decisions that can help rebuild, reimagine,
and revitalize tourism in Haiti and across the wider Caribbean.
